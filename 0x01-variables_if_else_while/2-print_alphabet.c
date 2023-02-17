/* using the putchar function */
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 *	followed by a new line.
 *
 * Return: always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
