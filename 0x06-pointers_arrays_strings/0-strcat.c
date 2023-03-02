#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string to be appended to the first
 *
 * Return: concatenated dest.
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
