#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 *
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * strtow - entry point
 * strc: number of arguments passed
 * rray of pointers pointing to these arguments
 * Return: 0 succes
 */

char **strtow(char *str)
{
	char *a;
	int len = _strlen(str);

	if (str == NULL || str == "")
		return (NULL);
	a = malloc(sizeof(char) * len);
	if (a == NULL)
		return (NULL);
	return (a);
}
