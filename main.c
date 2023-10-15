#include <stdio.h>
#include <stdlib.h>

//실습1
void print_star()
{
	int i;
	for(i=0; i<10; i++)    //공통부분을 함수로 정의
	  printf("*");
}

int main(void)  //간단하게 함수 호출
{
	print_star();
	print_star();
	print_star();
	
	return 0;
	
}