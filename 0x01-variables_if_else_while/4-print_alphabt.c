/* using the putchar function */
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase without q and e,
 *	followed by a new line.
 *
 * Return: always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
