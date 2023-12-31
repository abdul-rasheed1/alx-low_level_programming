#include <stdlib.h>
/**
 * create_array -  creates an array of characters
 * @size: the size of the array
 * @c: the character it starts with
 *
 * Return: null if size is 0 or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i]  = c;
		}
	}

	return (ar);
}


