#include "main.h"

/**
 * print_most_numbers - function name
 *
 * Return: 0 Always success
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
	if (c != 50 && c != 52)
	{
	_putchar(c);
	}
	}
	_putchar(10);
}
