#include  "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{       
        char *p;
        
        p = dest;
        while (*p != '\0')
        {       
                p++;
        }       
        while (*src != '\0')
        {       
                *p = *src;
                p++;
                src++;
        }
	*p = '\0';
	return (dest);
