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
	int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int total_days = 0;
	int i;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		days_in_month[2] = 29;
	}

	for (i = 1; i < month; i++)
	{
		total_days += days_in_month[i];
	}
	total_days += day;

	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	int remaining_days = 365 - total_days;
	if (days_in_month[2] == 29 && month = 2 && day <= 29)
	{
		remaining_days++;
	}

	printf("Day of the year: %d\n", total_days);
	printf("Remaining days: %d\n", remaining_days);
}
