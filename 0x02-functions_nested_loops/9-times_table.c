#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int n, i, p;

	n = '9';
	for (i = '0'; i <= '9'; i++)
	{
		p = n * i;
		_putchar(p);

