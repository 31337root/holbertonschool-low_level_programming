#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: void.
*/

void print_all(const char * const format, ...)
{
	va_list arglist;
	int count = 0;
	char *s;

	va_start(arglist, format);
	while (format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
				printf("%c, ", va_arg(arglist, int));
			break;

			case 'i':
				printf("%d", va_arg(arglist, int));
			break;

			case 'f':
				printf("%f", va_arg(arglist, double));
			break;

			case 's':
				s = va_arg(arglist, char *);
				if (!s)
				{
					printf("(nil)");
					break;
				}
					printf("%s", s);
			break;

			default:
			++count;
			continue;
		}
		if (format[count + 1] != '\0' && format[count + 1] != 'e')
			printf(", ");
		++count;
	}
	va_end(arglist);
	printf("\n");
}
