#include "main.h"
/**
 * swap_int - wsaps the value of two integrs
 * *@a: a pointer to an integer
 * *@b: another pointer to an integer
 *
 * return: noothing
 */
void swap_int(int *a, int *b)
{
	int tem;

	tem = *a;
	*a = *b;
	*b = tem;
}
