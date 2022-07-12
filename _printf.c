#include "main.h"

/**
 * _printf - prints the specified formats
 * @format: type of argument passed
 * Return: anything passed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int printed_char;
	f_types check[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	printed_char = selector(format, f_types, *ap);

	va_end(ap);
	return (printed_char);
