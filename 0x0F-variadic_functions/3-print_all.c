#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: void.
*/

void print_all(const char * const format, ...)
{
	const char *formata = format;

	printf("%s", formata);
}
