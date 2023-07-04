#include "main.h"
/**
 * _memset - sets a memory area with a constant byte
 * @s: memory area to be set
 * @b: the byte constant
 * @n; the number of areas withing s
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
