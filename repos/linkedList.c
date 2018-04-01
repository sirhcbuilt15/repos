#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int val;
    struct node *next;
}node_t;

void print_list(node_t * head);
void push(node_t * head, int val);
void push_init(node_t ** head, int val);
int pop(node_t ** head);

int main() {
    
   	node_t *head = NULL;
    head = (node_t *)malloc(sizeof(node_t));
    head->val = 1;
    
	push(head, 2);
    push(head, 3);
    push(head, 5);
    push(head, 8);
    push_init(&head, 1);
    
    print_list(head);
	pop(&head);
    print_list(head);
}

void push(node_t *head, int val)
{
    node_t *current;
    current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    
    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

void push_init(node_t ** head, int val)
{
    node_t *newnode;

    newnode =(node_t *)malloc(sizeof(node_t));
    newnode->val = val;
    newnode->next = *head;
    *head = newnode;
}

int pop(node_t ** head)
{
    node_t *next_n = NULL;
    int ret = -1;
    if(*head == NULL)
        return -1;
    next_n = (*head)->next;
    ret = (*head)->val;
    free(*head);
    *head = next_n;
	
	return ret;
}

void print_list(node_t * head) 
{
   node_t * current = head;
    
   while (current != NULL) 
   {
   		printf("%d\n", current->val);
   		current = current->next;
   }
}