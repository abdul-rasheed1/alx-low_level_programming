#include "main.h"
/**
 * print_alphabet: prints lowercase aphabets
 * Return: Always 0
 */
	void print_alphabet(void)
	{
		int a;

		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
		}
		_putchar('\n');
	}
