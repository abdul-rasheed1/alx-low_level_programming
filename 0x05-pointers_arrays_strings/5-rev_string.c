#include "main.h"
/**
 * rev_string - reverses a strng
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int n, i;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		char temp = s[i];

		s[i] = s[n - 1 - i];
		s[n - 1 - i] = temp;
	}
}

