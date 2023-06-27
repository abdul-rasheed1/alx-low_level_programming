#include "main.h"
#include <stdio.h>
/**
 * print_array - print all elements of an array
 * @a: array to be printed
 * @n: the size of the array
 *
 * return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
	if (i == n - 1)
	{
	printf("%d\n", a[n - 1]);
	}
	else
	{
		printf("%d, ", a[i]);
	}
	}
}
