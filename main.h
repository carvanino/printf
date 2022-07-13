#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format_types - This contains the identifier and pointer to the function
 * @identifier: This is the format type
 * @type: This is the function associated
 */

typedef struct format_types
{
	char *identifier;
	int (*type)(va_list);
} f_types;

int _putchar(char c);
int selector(const char *format, f_types check[], va_list args);
int _printf(const char *format, ...);
int print_char(va_list);
int print_integer(va_list);
int print_number(va_list args);
int print_percentage(va_list);
int print_string(va_list);

#endif /* MAIN_H */
