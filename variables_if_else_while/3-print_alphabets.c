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
	int mayuscula = 'A';

	while (letra <= 'z')
	{
		putchar (letra);
		letra++;
	}
	while (mayuscula <= 'Z')
	{
		putchar (mayuscula);
		mayuscula++;
	}
	putchar('\n');
	return (0);
}
