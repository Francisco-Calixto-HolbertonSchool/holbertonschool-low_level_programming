#include "holberton.h"

/**
 * cap_string - entry point
 * @a: array to uppercase
 * number of elements of the array
 * Return: uppercase string
 */

char *cap_string(char *a)
{
	int i, j;
	char s[] = {44, 59, 46, 32, 10, 33, 63, 40, 41, 123, 125, 9, 34};

	for (i = 1; a[i] != 0; i++)
	{
		if (a[0] >= 97 && a[0] <= 122)
			a[0] = a[0] - 32;
		if (a[i] >= 97 && a[i] <= 122)
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				if (s[j] == a[i - 1])
				{
					a[i] = a[i] - 32;
					break;
				}
			}
		}
	}
return (a);
}
