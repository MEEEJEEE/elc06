#include <stdio.h>
#include <stdlib.h>

//실습2
void func1(void){
	int x;
	printf("func1 x is at %p\n", &x);
}

int main(void){
	int x;
	printf("main x is at %p\n", &x);
	func1(); //ppt에 func()라고 되어있었는데 오타인 것 같아 수정했습니다
	
	return 0;
}