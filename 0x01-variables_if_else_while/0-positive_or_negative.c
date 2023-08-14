#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go here */

/* betty style doc for function main goes here */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	printf("Random number: %d\n", n);

	if (n > 0)
		printf("The number is positive.\n");
	else if (n < 0)
		printf("The number is negative.\n");
	else
		printf("The number is zero.\n");

	return (0);
}
