#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int c;
	int nbr;

	nbr = 19912507;

	c = _printf("%i, %d\n", nbr, nbr);
	printf("%d\n", c);
	c = _printf("% ");
	printf("%d\n", c);
	return (0);
}
