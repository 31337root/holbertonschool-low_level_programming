#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
*/

int main(void)
{
	char error_message[61] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, error_message, 61);
	return (1);
}
