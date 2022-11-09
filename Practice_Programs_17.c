#include <stdio.h>

int main() {
    // ? Q17 - Write a program to calculate the power of a number
    int n, pow;
    printf("Enter the value of number\n");
    scanf("%d", &n);

    printf("Enter the value of power\n");
    scanf("%d", &pow);

    int val = 1;

    for (int i = 0; i < pow; i++) {
        val = val * n;
    }
    printf("%d to the power %d is : %d\n", n, pow, val);

    return 0;
}