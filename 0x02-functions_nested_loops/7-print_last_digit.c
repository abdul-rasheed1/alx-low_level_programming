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

	 if (n < 0)
	 {
		 n = -n;
	 }


	last = (n % 10);
	_putchar(last + '0');
	return (last);
}

