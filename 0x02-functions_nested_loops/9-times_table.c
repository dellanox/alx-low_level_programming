#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;

            if (j == 0)
            {
                _putchar('0' + result);
            }
            else
            {
                _putchar(' ');
                _putchar( result / 10);
                _putchar('0' + result % 10);
            }

            if (j != 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }

        _putchar('\n');
    }
}
