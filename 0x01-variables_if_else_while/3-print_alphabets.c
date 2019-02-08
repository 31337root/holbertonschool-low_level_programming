#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char voca;

	for (voca = 'a'; voca <= 'z'; voca++)
	{
		putchar(voca);
	}
	for (voca = 'A'; voca <= 'Z'; voca++)
	{
		putchar(voca);
	}
	putchar('\n');
	return (0);
}
