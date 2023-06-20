#include "main.h"
/**
 * print_alphabet: prints lowercase aphabets
 */
	void print_alphabet(void)
	{
		int a;

		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
