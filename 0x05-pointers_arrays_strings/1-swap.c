#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: the first arguement for the function
 * @b: the second arguement for the function
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
