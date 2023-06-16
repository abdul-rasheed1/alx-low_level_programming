#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function is the entry point for the program.
 * It prints a message to the console.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
char b;
long int c;
long long int d;
float f;
printf("Size of char: %lu bytes\n", (unsigned long)sizeof(b));
printf("Size of float: %lu bytes\n", (unsigned long)sizeof((f));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(a));
printf("Size of long: %lu bytes\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(d));
return (0);
}

