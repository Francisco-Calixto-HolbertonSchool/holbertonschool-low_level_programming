#include "holberton.h"

/**
 * _strlen_recursion - Entry point
 * @s: string to modify
 *
 * Return: pointer to memory area s
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
