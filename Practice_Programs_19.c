#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // ? Q19 - Write a program to print prime numbers in a given range of number
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);

    for (int n = a; n <= b; n++)
    {
        if (isPrime(n))
        {
            printf("%d ", n);
        }
    }

    return 0;
}