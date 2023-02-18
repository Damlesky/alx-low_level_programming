/* using the while loop */
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *	followed by a new line.
 *
 * Return: always 0.
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	return (0);
}
