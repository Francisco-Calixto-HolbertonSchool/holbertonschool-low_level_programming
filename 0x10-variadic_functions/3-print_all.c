#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - Short description
 * @format: constant number n to be summe
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list p;

	op_t ops[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{'\0', '\0'}
	};
	va_start(p, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (format[i] == ops[j].op[0])
			{
				printf("%s", sep);
				(ops[j].f(p));
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}

/**
 * p_char - Short description
 * @p: constant number n to be summe
 */
void p_char(va_list p)
{
	printf("%c", va_arg(p, int));
}
/**
 * p_int - Short description
 * @p: constant number n to be summe
 */
void p_int(va_list p)
{
	printf("%i", va_arg(p, int));
}
/**
 * p_float - Short description
 * @p: constant number n to be summe
 */
void p_float(va_list p)
{
	printf("%f", va_arg(p, double));
}
/**
 * p_string - Short description
 * @p: constant number n to be summe
 */
void p_string(va_list p)
{
	char *s = va_arg(p, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
