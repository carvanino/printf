#include "main.h"

/**
 * _printf - prints the specified formats
 * @format: type of argument passed
 * Return: anything passed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_char;
	f_types check[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{"i", print_integer},
		{"d", print_integer},
		{NULL, NULL}
	};

	va_start(args, format);
	if (format == NULL)
		return (-1);
	printed_char = selector(format, check, args);

	va_end(args);
	return (printed_char);
}
