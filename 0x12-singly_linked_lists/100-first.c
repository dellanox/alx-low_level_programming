#include <stdio.h>

/**
 * startup_print - Function to be executed before main.
 * This function prints "You're beat! and yet, you must allow,\
 * \nI bore my house upon my back!\n".
 */
void __attribute__((constructor)) startup_print(void)
{
	printf("You're beat! and yet, you must allow,"
	       "\nI bore my house upon my back!\n");
}
