#include <stdio.h>
#include <string.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fwrite(message, sizeof(char), strlen(message), stderr);
fwrite("\n", sizeof(char), 1, stderr);
return (1);
}
