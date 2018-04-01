#include <stdio.h>

//static extern int a1;
extern int a1;

void next1(void)
{
	float b1;
	b1 = 19.2f;
	a1 = 13;
	printf("a1 = %d, b1 = %f, next1()\n",a1,b1);
}