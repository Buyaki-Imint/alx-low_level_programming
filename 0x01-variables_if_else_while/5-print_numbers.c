#include <stdio.h>
#include <stdlib.h>

/**
 *main-Entry point
 *
 *Description: prints numbers to base 10
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}