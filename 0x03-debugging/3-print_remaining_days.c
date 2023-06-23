#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are left in the
 * year, taking leap years into account
 * @month: Month in number format
 * @day: Day of month
 * @year: Year
 */
void print_remaining_days(int month, int day, int year)
{
	int daysInYear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 366 : 365;
	int dayOfYear = convert_day(month, day);

	if (dayOfYear == -1 || day <= 0 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	printf("Day of the year: %d\n", dayOfYear);
	printf("Remaining days: %d\n", daysInYear - dayOfYear);
}
