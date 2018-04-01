#include <stdio.h>

int b1 = 0;

void next(void)
{
	char a1;
	a1 = 'a';
	b1 = 77;
	printf("a1 = %c, b1 = %d, next() \n",a1,b1);
}