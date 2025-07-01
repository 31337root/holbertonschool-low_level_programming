#include "main.h"

/**
 * rev_string - Reverse a string.
 * Description: Reverse s.
 * @s: 'String' to be processed
 * Return: void.
*/

void rev_string(char *s)
{
	char tem;
	int  e, a;

	for (a = 0; s[a] != '\0'; a++)
	{}
	a--;
	for (e = 0; e <= a; e++)
	{
		tem = s[e];
		s[e] = s[a];
		s[a] = tem;
		a--;
	}
}
