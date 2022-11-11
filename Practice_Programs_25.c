#include <stdio.h>
#include <math.h>

int main()
{
    // ? Q25 - Write a program to to display the cube of the number upto given an integer
    int n;
    printf("Enter the value of the number\n");
    scanf("%d", &n);
    int cube;

    for (int i = 1; i <= n; i++)
    {
        cube = i * i * i;
        printf("%d -> %d\n", i, cube);
    }

    return 0;
}