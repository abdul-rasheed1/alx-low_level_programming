#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2:string 2
 *
 * Returns : 1 for grater; -1 for smalleer; 0 for equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2)
		}
		s1++;
		s2++;
	}
	return (0);
}
