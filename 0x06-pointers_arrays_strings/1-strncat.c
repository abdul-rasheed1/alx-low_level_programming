#include "main.h"
/**
 * _strncat - concatenates upto a specified number of characters
 * @dest : the destination string
 * @src : the source strng to be appended
 * @n: the specifed number of characters
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;

	p = dest;
	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n != 0)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
