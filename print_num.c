#include "main.h"

/**
 * print_number - prints any number passed inro function
 * @args: argument parameters
 * Return: Number of argument printed
 */

int print_number(va_list args)
{
	int n, len, div;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len = len + _putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}

	for (; num / div > 9; )
	{
		div *= 10;
	}
	for (; div != 0; )
	{
		len = len + _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
