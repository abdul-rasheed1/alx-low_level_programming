#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main -entry point
 * @argc:arg count
 * @argv: arg vector containing containing strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum;
	char *e;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];
			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
				e++;
			}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}



