#include <stdio.h>
#include <stdlib.h>

/**
 *main- declaration of values
 *
 *Description: print lowercase values except q and e
 *
 *Return: Always 0
*/

int main(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
