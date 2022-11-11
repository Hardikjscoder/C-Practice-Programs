#include <stdio.h>

int main()
{
    // ? Q24 - Write a program to find sum of n natural numbers
    int n;
    printf("Enter the value of the number\n");
    scanf("%d", &n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = n * (n + 1) / 2;
    }

    printf("%d", sum);

    return 0;
}