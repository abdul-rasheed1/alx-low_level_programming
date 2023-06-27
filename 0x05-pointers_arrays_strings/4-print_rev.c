#include "main.h"
/**
 * print_rev - prints astrng in reverse
 * @s: the string to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int n, i;

	n = 0;
	while (*s != '\0')
	{
		n++;
	}
	for (s = n; *s >= 0; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

