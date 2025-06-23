#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 Success
*/

int main(void)

{
	long a, b, c;

	a = 1;
	b = 2;

	printf("%ld, ", a);
	printf("%ld, ", b);

	while (c < 12000000000)
	{

		c = a + b;
		a = b;
		printf("%ld, ", c);
		b = c;

	}
	c = a + b;
	printf("%ld\n", c);
	return (0);
}
