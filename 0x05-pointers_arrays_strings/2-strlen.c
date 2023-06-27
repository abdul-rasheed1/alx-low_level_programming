#include "main.h"
/**
 * _strlen - returns the length of a string
 * @*s : th epointer to a string
 *
 * Returns: the length of the string
 */
int _strlen(char *s)
{       
        int n;
        
	n = 0;
        for (*s = 0; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}
