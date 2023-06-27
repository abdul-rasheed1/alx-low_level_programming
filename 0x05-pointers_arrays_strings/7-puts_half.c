#include "main.h"
/**
 * puts_half - prints half of a strng
 * @str: strng to be halved
 *
 * return: nothing
 */
void puts_half(char *str)
{
	int n, i;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 != 0)
	{
		int m = (n - 1) / 2;

		for (i = m - 1; i <= n - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n / 2; i <= n - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
