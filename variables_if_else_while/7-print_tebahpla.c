#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)

{
	char voca;

	for (voca = 'z'; voca >= 'a'; voca--)
	{
		putchar(voca);
	}
	putchar('\n');
	return (0);
}
