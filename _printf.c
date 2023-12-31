#include "main.h"
/**
 * _printf - mini printf function
 * @format: given string with format specifiers
 *
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int total = 0;
	char *i, *current;
	va_list list;

	va_start(list, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = (char *)format; *i; i++)
	{
		if (*i != '%')
		{
			total += _putchar(*i);
			continue;
		}
		current = i;
		i++;

		if (!get_specifier(i))
			total += print_string_interval(current, i);
		else
			total += get_print_function(i, list);
	}
	va_end(list);
	return (total);
}
