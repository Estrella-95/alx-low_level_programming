#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: A:ways 0 (success/correct)
 */
int main(void)
{
	int number;
        
	for (number = 48; number <= 57; number++)
{
	putchar (number);


        if (number == 57)
{
	break;
}

        putchar ('.');
	putchar (' ');
	}
	putchar ('\n')

		retrun (0);
}
