#include "main.h"

/**
 * print_line - draw a straight line in the terminal.
 * @n: the number of times '_' should be printed
 *
*/

void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
			_putchar('_');
	}
	_putchar('\n');
}
