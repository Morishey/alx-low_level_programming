#include "main.h"

/**
 * print_diagonal - function name
 * @n: function's formal parameter
 *
 * Return: 0 Always success
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar(10);
	}
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar(92);
	_putchar(10);
}
}
