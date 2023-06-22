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
	int dayOfYear = 0;
	int remainingDays = 0;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2 || (month == 2 && day == 29))
		{
			dayOfYear = 31 + 29 + day;
			remainingDays = 366 - dayOfYear;
		}
		else
		{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
		}
	}
	else
	{
		if (month == 2 && day == 29)
		{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
		}
		else
		{
			dayOfYear = (month - 1) * 31 + day;
			remainingDays = 365 - dayOfYear;
		}
	}

	printf("Day of the year: %d\n", dayOfYear);
	printf("Remaining days: %d\n", remainingDays);
}
