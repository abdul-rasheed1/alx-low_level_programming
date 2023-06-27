#include "main.h"
/**
 * rev_string - reverses a strng
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int n, i, r;

	n = 0;
	r = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i > n / 2; i--)
	{
		_putchar(r + '0');
		_putchar(i + '0');
		_putchar('\n');
		s[r] = s[i];
		r++;
	}
	s[n] = '\0';
}

