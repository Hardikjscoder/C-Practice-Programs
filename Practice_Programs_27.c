#include <stdio.h>

int main()
{
    // ? Q27 - Write a program in C to find the sum of all elements of the array
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}