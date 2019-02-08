#include <stdio.h>
#include <stdlib.h>

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
		if (voca != 'q' && voca != 'e')
		{
			putchar(voca);
		}
	}
	putchar('\n');
	return (0);
}
