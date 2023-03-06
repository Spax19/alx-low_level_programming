#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {31, 28 + is_leap_year(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_of_year = 0;
    int remaining_days = 0;

    // Check for invalid dates
    if (month < 1 || month > 12 || day < 1 || day > days_in_month[month - 1])
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    // Calculate day of year
    for (int i = 0; i < month - 1; i++)
    {
        day_of_year += days_in_month[i];
    }
    day_of_year += day;

    // Calculate remaining days
    remaining_days = 365 + is_leap_year(year) - day_of_year;

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", remaining_days);
}

int is_leap_year(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

