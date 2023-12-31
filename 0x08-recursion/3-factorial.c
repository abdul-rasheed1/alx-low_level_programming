#include "main.h"
/**
 * factorial - find the fact of a number
 * @n: the number
 *
 * Return: the results of factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
		return (n * factorial(n - 1));
}
