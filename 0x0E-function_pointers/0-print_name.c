#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: String.
 * @f: Address of function.
 * Return: void.
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
