#include "main.h"

/**
 * print_char - prints a chararter
 *
 * @ap: pointer to argument parameter
 *
 * Return: 1 on success
 */

int print_char(va_list ap)
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

int print_string(va_list ap)
{
	char *str;
	int i;

	str = va_arg(ap, char *);
	if (str == NULL || *str == '\0')
	{
		str = "(nil)";
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * print_integer - prints an integer
 *
 * @ap: argument parameter
 *
 * Return: Integer
 */

int print_integer(va_list ap)
{
	int i;

	i = print_number(ap);
	return (i);
}

/**
 * print_percentage - print the percentage character
 *
 * @ap: argument parameter
 *
 * Return: percentage sign
 */

int print_percentage(__attribute__((unused))va_list ap)
{
	_putchar('%');
	return (1);
}
