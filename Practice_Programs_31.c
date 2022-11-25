#include <stdio.h>
#include <string.h>

int main()
{
    // ? Q31 - Write a program to sort a string in alphabetical order
    char str[100];
    printf("\n\t Enter the string : ");
    scanf("%s", str);

    int len = strlen(str);
    char temp;

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("%s", str);

    return 0;
}