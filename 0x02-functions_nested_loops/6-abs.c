#include "main.h"
/**
 * _abs - finds the absolute value of an integer
 * @n: the number whose absolute value is wanted
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	int val;

	if (n > 0)
	{
		val = n;
	}
	else if (n == 0)
	{
		val = 0;
	}
	else if (n < 0)
	{
		val = n * -1;
	}
	return (val);
}
