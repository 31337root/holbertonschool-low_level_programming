#include <stdio.h>

int main(void)

{
	long a, b, c;
	a = 1;
	b = 2;
	
	printf("%ld, ", a);
	printf("%ld\n", b);

	while (c < 8000000000)
	{
		c = a + b;
		a = b;
		printf("%ld, ", c);
		b = c;
	}
	putchar('\n');
}
