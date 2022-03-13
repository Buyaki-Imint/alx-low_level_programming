#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: print lowercase alphabet in order
 *
 *Return: Always 0 (Success)
*/

int main(void)
{

	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}

	return (0);
}
