#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * 	and updates the value it points to to 98.
 * @*c: pointer to store variable address.
*/

void reset_to_98(int *n)
{
	int i;

	n = &i;
	*n = 98;
}
