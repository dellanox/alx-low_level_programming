/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the string of accepted characters
 *
 * Return: Number of bytes in the initial segment of s consisting only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
		match = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				match = 1;
				break;
			}
			accept++;
		}

		if (!match)
			break;

		count++;
		s++;
		accept = accept - count;
	}

	return (count);
}
