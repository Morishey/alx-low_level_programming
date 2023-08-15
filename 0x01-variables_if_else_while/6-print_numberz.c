#include <stdio.h>

/**
 * main - prints all single numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 123456789;
	char digits[] = "0123456789";

	putchar(digits[n]);
	putchar('\n');

	return (0);
}
