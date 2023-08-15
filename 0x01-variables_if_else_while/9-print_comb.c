#include <stdio.h>

/**
 * main - print
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
if (n == 57)
continue;
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
