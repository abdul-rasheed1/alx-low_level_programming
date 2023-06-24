#include "main.h"
/**
 * print_square - prints a square
 * @size: the sixe of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= n; h++)
		{
			for (w = 1; w <= n; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
