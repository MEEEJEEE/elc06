#include <stdio.h>
#include <stdlib.h>

//실습3

int sumTwo(int a, int b) {
    return a + b;
}

int square(int n) {
    return n * n;
}

int get_max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main(void) {
    int num1 = 5;
    int num2 = 7;


    int sum = sumTwo(num1, num2);
    printf("Sum of the two integers: %d\n", sum);


    int squared = square(num1);
    printf("Square of the first integer: %d\n", squared);


    int max_num = get_max(num1, num2);
    printf("Greater of the two integers: %d\n", max_num);

    return 0;
}

