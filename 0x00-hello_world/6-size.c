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
    printf("Size of char: %zu bytes\n", sizeof(a));
    printf("Size of short: %zu bytes\n", sizeof(b));
    printf("Size of int: %zu bytes\n", sizeof(c));
    printf("Size of long: %zu bytes\n", sizeof(d));
    printf("Size of long long: %zu bytes\n", sizeof(f));

    return (0);
}

