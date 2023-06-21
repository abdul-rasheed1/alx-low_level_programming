#include "main.h"
/**
 * print_alphabets_x10 - prints alphabets x10 times
 *
 * Description: prints x10 all alphabets
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = '1'; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

