#include <stdio.h>

/* Return 1 Success */

int main(void)

{
	long a, b, c;
	a = 1;
	b = 2;
	
	printf("%ld, ", a);
	printf("%ld, ", b);

	while (c < 8000000000)
	{
		c = a + b;
		a = b;
		printf("%ld, ", c);
		b = c;
	}
	putchar('\n');
	return (1);
}
