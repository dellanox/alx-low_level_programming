/**
 * convert_day - Converts day of month to day of year,
 * without accounting for leap year
 * @month: Month in number format
 * @day: Day of month
 *
 * Return: Day of year
 */
int convert_day(int month, int day)
{
	int dayOfYear;

	switch (month)
	{
        case 1:
		dayOfYear = day;
		break;
        case 2:
		dayOfYear = 31 + day;
		break;
        case 3:
		dayOfYear = 59 + day;
		break;
        case 4:
		dayOfYear = 90 + day;
		break;
        case 5:
		dayOfYear = 120 + day;
		break;
        case 6:
		dayOfYear = 151 + day;
		break;
        case 7:
		dayOfYear = 181 + day;
		break;
        case 8:
		dayOfYear = 212 + day;
		break;
	case 9:
		dayOfYear = 243 + day;
		break;
        case 10:
		dayOfYear = 273 + day;
		break;
        case 11:
		dayOfYear = 304 + day;
		break;
        case 12:
		dayOfYear = 334 + day;
		break;
        default:
		dayOfYear = -1;
		break;
	}

	return dayOfYear;
}
