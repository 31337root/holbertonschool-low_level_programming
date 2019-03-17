#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: String to be print between strings given to the function.
 * @n: Number of given strings.
 * Return: void.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int i;
	char *str;

	va_start(strlist, n);
	for (i = 1; i < n; i++)
	{
		str = va_arg(strlist, char *);

		if (str == '\0')
		{
			str = "(nil)";
		}
		if (separator != '\0')
		{
			printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	str = va_arg(strlist, char *);

		if (str == '\0')
		{
			str = "(nil)";
		}
	printf("%s\n", str);
	va_end(strlist);
}
