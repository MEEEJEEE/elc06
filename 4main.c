#include <stdio.h>
#include <stdlib.h>

//실습4

void square( int a )
{
	a=a*a;
}

int main()
{
	int a=2;
	square(a);
	printf("a=%i\n",a);
}