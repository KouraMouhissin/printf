#include "main.h"
/**
 * _putchar - fonction to write c to stdout
 * @c: our charcter
 * Return: 1/-1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
