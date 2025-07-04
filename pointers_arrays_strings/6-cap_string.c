#include "main.h"

/**
 * *cap_string - Function to capitalizes two strings
 * Description: Return a processed or not
 * @a: String to be capitalized
 * Return: char
*/

char *cap_string(char *a)
{
	if (a)
	{
		int i;

		for (i = 0; a[i] != '\0'; i++)
		{
			if ((a[0] >= 'a' && a[0] <= 'z')
			{
				a[0] = a[0] - 32;
			}
			if (!((a[i] >= 'a' && a[i] <= 'z') || \
				(a[i] >= 'A' && a[i] <= 'Z')))
			{
				while (a[i] != '\0')
				{
					i++;
					if (a[i] >= 'a' && a[i] <= 'z')
					{
						a[i] = a[i] - 32;
						break;
					}
				}
			}
		}
		return (a);
	}
	return (a);
}
