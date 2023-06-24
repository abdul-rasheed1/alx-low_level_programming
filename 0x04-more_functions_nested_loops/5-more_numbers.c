#include "main.h"
/**
 * more_numbers - prints 0 to 14 10x
 * Return: nothing
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
