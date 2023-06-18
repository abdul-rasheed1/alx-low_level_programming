#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	int  n;

	alpha = 'a';
	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

