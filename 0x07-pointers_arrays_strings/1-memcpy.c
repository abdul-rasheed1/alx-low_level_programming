#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the memory area to be set
 * @src: the byte source
 * @n: the size of area
 *
 * Return: the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		dest[t] = src[t];
	}
	return (dest);
}
