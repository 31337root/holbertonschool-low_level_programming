#include <stdio.h>

/**
 * main - Entry point.
 * Description: Program to print the name of the file it was compiled from.
 * Return: Success Always (0).
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
