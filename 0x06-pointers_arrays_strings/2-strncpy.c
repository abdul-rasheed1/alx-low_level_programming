#include "main.h"
/**
 * _strncpy - copiees string with specified number of characters
 * @dest: the new copied strng
 * @src: source of the string
 * @n: specific number of chars to be copied
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p;

	p = dest;
	while (*src != '\0' && n != 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	while (n != 0)
	{
		*p = '\0';
		p++;
		n--;
	}
	return (dest);
}
