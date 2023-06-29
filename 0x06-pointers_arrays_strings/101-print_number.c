#include "main.h"

/**
 * print_number - Prints an integer using _putchar function
 * @n: The integer to be printed
 */

void print_number(int n) {
  if (n < 0) {
    _putchar('-');
    n = -n;
  }

  if (n == 0) {
    _putchar('0');
    return;
  }

  int digit;
  do {
    digit = n % 10;
    _putchar('0' + digit);
    n /= 10;
  } while (n > 0);
}
