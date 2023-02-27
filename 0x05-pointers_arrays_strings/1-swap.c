#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to store variable address.
 * @b: second pointer to store variable address.
*/

void swap_int(int *a, int *b)
{
	int temp = *a

	*a = *b;
	*b = temp;
}
