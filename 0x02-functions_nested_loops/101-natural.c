#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (succes)
 */

int main(void)
{
int a;
int sum = 0;
for (a = 1; a < 1024; a++)
{
if ((a % 3 == 0) || (a % 5 == 0))
sum += a;
}
printf("%d\n", sum);
return (0);
}
