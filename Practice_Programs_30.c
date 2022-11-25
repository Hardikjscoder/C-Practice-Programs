#include <stdio.h>
#include <string.h>

int main()
{
    // ? Q30 - Check that a given string is palindrome or not
    char a[100], b[100];

    printf("Enter the string : ");
    gets(a);

    strcpy(b, a);
    strrev(b);

    if (strcmp(a, b) == 0)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

    return 0;
}