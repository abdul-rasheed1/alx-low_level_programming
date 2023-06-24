#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", c);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
