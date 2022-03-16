#include "main.h"

/**
 *pint - print alphabet
 *
 *Description: prints lowercase alphabets
 *
 *Returns 0
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
