#include "main.h"

/**
 *_islower - determinate if the input is lower or upper case
 *@c: value to process
 *Return: On lower case 1, otherwise 0.
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
