#include "main.h"
#include <string.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check_palindrome(s, 0, strlen(s) - 1));
}

/**
 * check_palindrome - Recursive function to check if a string is a palindrome
 * @s: The string to check
 * @start: The start index of the substring to check
 * @end: The end index of the substring to check
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
