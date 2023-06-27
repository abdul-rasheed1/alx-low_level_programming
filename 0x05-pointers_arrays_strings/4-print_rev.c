#include "main.h"
/**
 * print_rev - prints astrng in reverse
 * @s: the string to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	for (s = n - 1; s >= 0; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

