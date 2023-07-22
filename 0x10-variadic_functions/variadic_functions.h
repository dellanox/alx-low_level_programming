#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);



/**
 * struct print - Struct print
 *
 * @type: The type to print.
 * @func: The function pointer to the corresponding print function.
 */
typedef struct print
{
    char type;
    void (*func)(va_list arg);
} print_t;

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
