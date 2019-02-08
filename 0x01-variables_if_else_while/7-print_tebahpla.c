#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)

{
	char voca;

	for (voca = 122; voca >= 97; voca--)
	{
		putchar(voca);
	}
	putchar('\n');
	return (0);
}
