#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: prints both lowercase and uppercase
 *
 *Return: Always 0 (Success)
*/

int main(void)
{

	char alphabet, Alphabet;

	alphabet = 'a';
	Alphabet = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (Alphabet <= 'Z')
	{
		putchar(Alphabet);
		Alphabet++;
	}

	putchar(\n);

	return (0);
}
