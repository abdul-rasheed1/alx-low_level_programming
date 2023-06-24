#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: length of diagonal
 *
 * Return: nothinf
 */
void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
