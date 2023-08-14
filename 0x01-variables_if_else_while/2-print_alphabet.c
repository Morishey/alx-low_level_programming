#include <stdio.h>

/**
 ** main - prints the alphabet.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alp[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(alp[i]);
	}
	return (0);
}
