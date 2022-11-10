#include <stdio.h>

int main()
{
    // ? Q21 - Write a program to split a given number into digits
    int n = 55;

    while (n != 0)
    {
        int mod = n % 10;
        n /= 10;
        printf("%d ", mod);
    }

    return 0;
}