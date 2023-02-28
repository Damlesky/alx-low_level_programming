#include "main.h"

/**
 * _strlen - returns the length of a string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s[i] != '\0'; i++)
	{
		if (i > 9)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
}
