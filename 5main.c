//실습5 Combination

#include <stdio.h>

// 함수 선언 
int factorial(int num);
int combination(int n, int r);
int get_integer(char *message);

int main(void)
{
    int n, r; 

    // 입력값 받기
    n = get_integer("Enter the value for n: ");
    r = get_integer("Enter the value for r: ");

    // 분모/분자 계산
    int numerator = factorial(n);
    int denominator = factorial(n - r) * factorial(r);

    // 최종 값 계산 및 출력 
    int result = numerator / denominator;
    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}

// 팩토리얼 계산 함수
int factorial(int num)
{
    int res = 1;
    for (int i = 1; i <= num; ++i) {
        res *= i;
    }
    return res;
}

// 조합 계산 함수
int combination(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(n - r) * factorial(r);
    return numerator / denominator;
}

// 정수 입력 함수 
int get_integer(char *message)
{
    int input;
    printf("%s", message);
    scanf("%d", &input);
    return input;
}
