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
	int i, count = 0;
	double f;
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
				i = va_arg(arglist, int);
				printf("%d, ", i);
			break;

			case 'f':
				f = va_arg(arglist, double);
				printf("%f, ", f);
			break;

			case 's':
				s = va_arg(arglist, char *);
				if (s != '\0')
					printf("%s", s);
				if (s == '\0')
					printf("(nil)");
			break;
		}
		++count;
	}
	va_end(arglist);
	printf("\n");
}
