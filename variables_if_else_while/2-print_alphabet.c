#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *	main - print the alphabet from a to z
 *
 *	Return: Always 0 (Success)
 */

int main(void)
{
	int letra = 'a';

	while (letra <= 'z')
	{
	putchar (letra);
	letra++;
	}
	putchar('\n');
	return (0);
}
