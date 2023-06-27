#include "main.h"
/**
*puts2 - prnts string
*@str - str to be prnted
*
*return :nothing
*/
void puts2(char *str)
{
	int n , i;

	n = 0;
	while (n != '\0')
	{
		n++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}



