#include "main.h"
/**
 * _strspn - entry point
 *@s: input
 *@accept: input
 *
 * Return: always 0 success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	int r;

	n = 0;
	while (*s)
	{
		for (r = 0; accept[r] != '\0'; r++)
		{
			if (accept[r] == *s)
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

