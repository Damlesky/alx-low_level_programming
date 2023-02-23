#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

	if (i > 0)
		printf("%d is positive", i);
	else if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is zero", i);

        return (0);
}
