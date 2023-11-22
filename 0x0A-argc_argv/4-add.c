#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int num;

	printf("Enter positive numbers to add, or any negative number ti stop:\n");

		while (1)
		{
			scanf("%d", &num);

			if (num < 0)
			{
				break;
			}
			sum += num;
		}
	printf("the sum of the positive numbers is %d\n", sum);
	return 0;
}
