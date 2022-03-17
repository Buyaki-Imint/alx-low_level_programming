#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i; /* declaration of i */

        printf("Infinite loop incoming :(\n");

        i = 0; 

        while (i > 10) /* causes infinite loop until condition is met */
        {
                putchar((i % 10) + '0'); /* prints output of every loop */
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
