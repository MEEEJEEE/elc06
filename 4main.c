#include <stdio.h>
#include <stdlib.h>

//실습4

//다음 두가지 코드의 결과를 확인해보기
   //4-1
/*void square( int a )
{
	a=a*a;
}

int main()
{
	int a=2;
	square(a);
	printf("a=%i\n",a);
}

//결과 a=2
*/
 
   //4-2
int square(  int a )
{
	return (a*a);
}

int main()
{
	int a=2;
	a=square(a);
	printf("a=%i\n",a);
}

//결과 a=4