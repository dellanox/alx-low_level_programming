#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to the function that will print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
