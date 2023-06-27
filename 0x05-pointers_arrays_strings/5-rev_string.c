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
	for (i = n - 1; i >= 0; i--)
	{
		s[r] = s[i];
		r++;
	}
	s[n] = '\0';
}

