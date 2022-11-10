#include <stdio.h>

int main()
{
    // ? Q20 - Write a program to print the sum of digits of a number
    int n;
    printf("Enter the value of the number\n");
    scanf("%d", &n);

    int sum = 0;
    int mod;

    while (n != 0)
    {
        mod = n % 10;
        n /= 10;
        sum += mod;
    }

    printf("The sum of the digits is : %d\n", sum);

    printf("%d", 45 % 10);

    return 0;
}