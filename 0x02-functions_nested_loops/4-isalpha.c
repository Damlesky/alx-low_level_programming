#include "main.h"

/**
 * _isalpha - checks for alphabet character.
 * @c: the character to be checked.
 *
 * Return: 1 if the character is an alphabet, 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
