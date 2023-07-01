#include "main.h"
/**
 * string_toupper - converts small cases to upeercase
 * str: the string
 *
 * Return: a string
 */
char *string_toupper(char *str)
{
	char *p;
	
	*p = str;
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A');
		}
		p++;
	}
	return (str);
}

