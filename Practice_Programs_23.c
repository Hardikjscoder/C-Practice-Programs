#include <stdio.h>

int main()
{
    // ? Q23 - Write a program to calculate the square root of a number without using sqrt() function/method
    int number = 36;

    float temp, sqrt;

    sqrt = number / 2;
    temp = 0;

    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (number / temp + temp) / 2;
    }

    printf("The square root of '%d' is '%.2f'", number, sqrt);

    return 0;
}