#include "main.h"
/**
 *_puts - prints a string to stdout
 *@str: string to printed
 *
 * return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
