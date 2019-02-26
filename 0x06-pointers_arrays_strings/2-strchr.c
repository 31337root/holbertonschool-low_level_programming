#include "holberton.h"
#define NULL 0

/**
 * *_strchr - Function that locates a character in a string.
 * Description: Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found.
 * @s: String to be analized.
 * @c: Character to be found.
 * Return: char.
*/

char *_strchr(char *s, char c)
{
	int count;
	char *location;

	for (count = 0; s[count] != c; count++)
	{}
	if (s[count] == c)
	{
		location = &s[count];
	}
	if (s[count] != c)
	{
		location = NULL;
	}
	return (location);
}
