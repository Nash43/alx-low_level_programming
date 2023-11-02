#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
* i = 0; is causing the infinite loop as there is no condition
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
