#include <stdio.h>

void next(void);
void next1(void);

int a1 = 1;

main()
{
	//int a1 = 1;
	printf("***Scope extern***\n");
	a1 = 2;
	printf("a1 = %d, main\n",a1);
	next();
	printf("a1 = %d, main\n",a1);
	next1();
	printf("a1 = %d, main\n",a1);
	//printf("b1 = %d, main\n",b1);
}
