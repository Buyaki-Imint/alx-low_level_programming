#include <stdio.h>
#include <stdlib.h>

/**
 *main-Entry point
 *
 *Description: prints lowercase letters in reverse
 *
 *Return:Always 0(Success)
*/

int main(void)
{

	char letter;
	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
