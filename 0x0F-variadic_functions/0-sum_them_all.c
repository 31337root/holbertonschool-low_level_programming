#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: Number of argumments pased to the function.
 *
 * Return: @add (The addition of arguments passed to the function)
*/

int sum_them_all(const unsigned int n, ...)
{

	va_list numlist;
	int add = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(numlist, n);

	for (i = 0; i < n; i++)
	{
		add += va_arg(numlist, int);
	}

	va_end(numlist);

	return (add);
}
