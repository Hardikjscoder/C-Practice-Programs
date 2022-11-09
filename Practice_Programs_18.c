#include <stdio.h>

int main()
{
    // ? Q18 - Write a program to calculate the no. of digits in a number
    int n;
    int count = 0;

    printf("Enter the value of the number\n");
    scanf("%d", &n);

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            count++;
        }
    }

    printf("The number of digits is : %d", count);

    return 0;
}

/*

Algorithm:

While number is not equal to zero, keep dividing the number by 10 and increment the count.

For example, n = 45

count = 0
1. n /= 10 => 45/10 => 4 (count is set to 1)
2. n /= 10 => 4/10 => 0 (count is set to 2)

So, therefore the number of digits is : 2

*/