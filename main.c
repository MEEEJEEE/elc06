#include <stdio.h>
#include <stdlib.h>

//실습1
int main(void)
{
	int i;
	
	//*을 10개 출력하는 코드(동일한 코드가 3번 반복)
	for( i=0; i<10; i++)
	printf("*");
	for( i=0; i<10; i++)
	printf("*");
	for( i=0; i<10; i++)
	printf("*");
	
	return 0;
	
}