#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int e;
for (i = 48; i <= 57; i++)
{
for (e = 49; e < 58; e++)
{
if (i >= e)
{
}
else
{
putchar(i);
putchar(e);
if ((i == 56) && (e == 57))
{
}
else
{
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
