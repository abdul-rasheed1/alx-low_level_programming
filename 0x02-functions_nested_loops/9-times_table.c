#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int n, i, p;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			p = n * i;
			_putchar(p + '0');
			if (i == 9)
			{
				_putchar('\n');
			}
		}
	}
}
