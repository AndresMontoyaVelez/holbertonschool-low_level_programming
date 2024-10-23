#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * write - print text
 * Return: Always 1 (Success)
 */

char main(void)
{
	int s;

	s = sizeof("nd that piece of art if useful - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" Dora Korpar, 2015-10-19\n", s);

	return (1);
}
