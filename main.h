#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
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
	void (*type)(va_list *);
} f_types;

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
