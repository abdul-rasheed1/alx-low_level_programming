#include "main.h"
/**
 * _strchr- locates a characyer in a string
 *@s: string to be checked
 *@c: the charater were looking for
 *
 *Return: pointer to character or null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

