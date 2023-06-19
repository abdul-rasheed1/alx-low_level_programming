#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Successive)
 */
int main(void)
{
int d;

int c;
for (d = '0'; d <= '9'; d++)
{
	for (c = '0'; c <= '9'; c++)
	{
		putchar(d);
		putchar(c);
		if (d == '9' && c == '9')
		{
			putchar('\n');
		}
		putchar(',');
		putchar(' ');
	}
}
return (0);
}
