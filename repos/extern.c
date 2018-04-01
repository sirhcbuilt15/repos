#include <stdio.h>

void next(void);
void next1(void);

int a1 = 1;

main()
{
	printf("***Scope extern***\n");
	a1 = 2;
	printf("a1 = %d, main\n",a1);
	next();
	printf("a1 = %d, main\n",a1);
	next1();
	printf("a1 = %d, main\n",a1);
	//printf("b1 = %d, main\n",b1);
}

int b1 = 0;

void next(void)
{
	//char a1;
	a1 = 'a';
	b1 = 77;
	printf("a1 = %c, b1 = %d, next() \n",a1,b1);
}

void next1(void)
{
	float b1;
	b1 = 19.2f;
	a1 = 13;
	printf("a1 = %d, b1 = %f, next1()\n",a1,b1);
}