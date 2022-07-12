#include "main.h"

/**
 * print_char - prints a chararter
 *
 * @ap: pointer to argument parameter
 *
 * Return: 1 on success
 */

void print_char(va_list *ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string literal
 *
 * @ap: pointer to argument parameter
 *
 * Return: string
 */

void print_string(va_list *ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL || *str == '\0')
	{
		str = "(nil)";
	}
	return (str);
}

/**
 * print_int - prints an integer
 *
 * @ap: argument parameter
 *
 * Return: Integer
 */

void print_int(va_list *ap)
{
	int i;

	i = va_arg(ap, double);
	return (i);
}

/**
 * print_percentage - print the percentage character
 *
 * @ap: argument parameter
 *
 * Return: percentage sign
 */

void print_percentage(va_list *ap)
{
	_putchar('%');
	return (1);
}
