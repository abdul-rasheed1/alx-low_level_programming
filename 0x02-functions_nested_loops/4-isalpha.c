#include "main.h"
/**
 * _isalpha - checks if char is an alphabets
 * @c: char to be checked
 *
 * Return: 1 if c is letter . 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
