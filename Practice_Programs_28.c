#include <stdio.h>

int main()
{
    // ? Q28 - Replace all 0's with 1 in a given integer
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int temp;

    while (n != 0)
    {
        int digits = n % 10;
        n /= 10;
        if (digits == 0)
        {
            digits = 1;
            temp = digits;
        }
        printf("%d", temp);
    }

    return 0;
}