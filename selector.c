#include "main.h"

/**
 * selector - decides what function should be used to print a format
 *
 * @format: a character specifying format
 * @check: an array containing function to be used basee on the format
 * @ap: argumment parameters to be passed into the function
 *
 * Return:
 */

int selector(const char *format, f_types check[], va_list *ap)
{
	int i, j, num, printed_char;

	printed_char = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == "%")
		{
			for (j = 0; f_types[j].identifier != NULL; j++)
			{
				if (format[i + 1] == f_types[j].identifier[0])
				{
					num = f_types[j].type(arg_lisy);
					if (num == -1)
					{
						return (-1);
					}
					printed_char = printed_char + num;
					break;
				}
			}
			if (f_types[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_char = printed_char + 2;
				}
				else
				{
					return (-1);
				}
			}
			i = i + 1;
		}
		else
			_putchar(format[i]);
			printed_char++;
	}
	return (printed_char);
}
