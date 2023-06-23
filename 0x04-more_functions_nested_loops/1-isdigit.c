#include "main.h"
/**
 * _isdigit - checks for digit 0 to 9
 * @c: the number to be cjjhecked
 *
 * Return: 1 if true 0otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
