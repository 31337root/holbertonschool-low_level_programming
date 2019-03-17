#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: Characters to be printed between given numbers.
 * @n: Number of parameters given to the function.
 * Return: void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list paramlist;
	unsigned int i;
	int num;

	va_start(paramlist, n);

	for (i = 1; i < n; i++)
	{
		num = va_arg(paramlist, int);

		if (separator != NULL)
		{
			printf("%d%s", num, separator);
		}
		else
		{
			printf("%d", num);
		}
	}
	num = va_arg(paramlist, int);
	printf("%d\n", num);

	va_end(paramlist);
}
