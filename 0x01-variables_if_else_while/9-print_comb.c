#include <stdio.h>
#include <stdlib.h>

/**
 *main-Entry point
 *
 *Description: prints singlr digit numbers seperated by ,
 *
 *Return: Always 0(Success)
*/

int main(void)
{

	int n;
	for (n = 0;n < 10;n++)
		putchar((n % 10) + '0');
		putchar(',');
	
	return (0);
}
