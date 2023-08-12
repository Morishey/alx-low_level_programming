#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of char: %u byte(s)\n", (unsigned int)sizeof(char));
printf("Size of int: %u byte(s)\n", (unsigned int)sizeof(int));
printf("Size of long: %u byte(s)\n", (unsigned int)sizeof(long));
printf("Size of long long: %u byte(s)\n", (unsigned int)sizeof(long long));
printf("Size of float: %u byte(s)\n", (unsigned int)sizeof(float));
printf("Size of double: %u byte(s)\n", (unsigned int)sizeof(double));
printf("Size of long double: %u byte(s)\n", (unsigned int)sizeof(long double));

return (0);
}

