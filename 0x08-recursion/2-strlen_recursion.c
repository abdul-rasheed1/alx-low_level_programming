#include "main.h"
/**
 * _strlen_recursion - finds length of string
 * @s: the string
 *
 * Return : the length of the string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return 0;
	}
	 i = 1 + _strlen_recursion(s + 1);
	return i;
}
