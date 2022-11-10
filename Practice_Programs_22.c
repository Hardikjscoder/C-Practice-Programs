#include <stdio.h>
#include <math.h>

void isPerfectSq(int n)
{
    int sq = sqrt(n);
    if (sq * sq == n)
    {
        printf("Perfect Square");
    }
    else
    {
        printf("Not a Perfect Square");
    }
}

int main()
{
    // ? Q22 - Write a program to check if a number is perfect square or not
    int n = 25;
    isPerfectSq(n);

    return 0;
}