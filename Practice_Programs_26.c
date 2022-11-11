#include <stdio.h>

int main()
{
    // ? Q26 -  Write a program to display the n terms of odd natural number and their sum
    int n;
    printf("Enter the value of the number\n");
    scanf("%d", &n);
    int sum = 0;
    int temp;

    for (int i = 1; i <= n; i++)
    {
        temp = 2 * i - 1;
        sum += temp;
    }

    printf("%d", sum);

    return 0;
}