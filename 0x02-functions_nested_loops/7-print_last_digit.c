#include "main.h"
/**
 * print_last_digit - prints out the last digit of a number
 * @n: the number who's last digit is wanted
 *
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	int last;


	last = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(last + '0');
	return (last);

}

