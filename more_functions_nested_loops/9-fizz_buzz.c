#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		if ((n % 5) != 0 && (n % 3) != 0)
		{
			printf("%d", n);
		}
		if (n != 100)
		{
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
