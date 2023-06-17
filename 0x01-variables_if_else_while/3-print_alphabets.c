#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	char Alpha;

	alpha = 'a';
	Alpha = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (Alpha <= 'Z')
	{
		putchar(Alpha);
		Alpha++;
	}
	putchar('\n');
	return (0);
}

