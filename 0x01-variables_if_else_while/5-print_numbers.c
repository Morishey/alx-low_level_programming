#include <stdio.h>

/**
 * main - prints single digits of base 10 from 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
