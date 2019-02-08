#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '15'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
