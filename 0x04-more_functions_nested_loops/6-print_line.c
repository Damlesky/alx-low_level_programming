#include "main.h"

/**
 * print_line - draw a straight line in the terminal.
 * @n: the number of times '_' should be printed
 *
*/

void print_line(int n)
{
	for (n > 0; n--)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
}
