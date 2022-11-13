#include <stdio.h>

void returnNDays(char *str, int year)
{
    // ? Q29 - Print the number of days in a given month of a given year
    int n_days;
    if (str == "April" || str == "June" || str == "September" ||
        str == "November")
    {
        n_days = 30;
        printf("There are %d no of days in this month.\n", n_days);
    }
    else if (str == "February")
    {
        if (year % 4 == 0)
        {
            n_days = 29;
            printf("There are %d no of days in this month.\n", n_days);
        }
        else
        {
            n_days = 28;
            printf("There are %d no of days in this month.\n", n_days);
        }
    }
    else
    {
        n_days = 31;
        printf("There are %d no of days in this month.\n", n_days);
    }
}

int main()
{
    char str[50];
    int year;

    returnNDays("February", 2004);

    return 0;
}