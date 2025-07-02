#include "main.h"

/**
 * _strcmp - Function to compare two strings
 * Description: Return 0 if is the same stirng, possitive if s1 is
 * grater or negative if is less than
 * @s1: String to be compared
 * @s2: String to be compared
 * Return: int.
*/

int _strcmp(char *s1, char *s2)
{
	int leng1, leng2, i;

	for (leng1 = 0; s1[leng1] != '\0'; leng1++)
	{}
	for (leng2 = 0; s2[leng2] != '\0'; leng2++)
	{}
	if (leng1 > leng2)
	{
		return (15);
	}
	else if (leng1 < leng2)
	{
		return (-15);
	}
	else
	{
		for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
		{}
		return (0);
	}
}
