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
	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n; i >= 0; i--)
	{
		for (r = 0; r <= n-1; r++)
		{
			s[r] = s[i];
		}
	}
}

