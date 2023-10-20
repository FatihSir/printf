#include <stdio.h>
#include "main.h"

/**
 * swistr - takes in a pointer and  checks it
 * @format: int arg
 * @arg: int value
 *Return: nothing
 */

int swistr(int arg, const char *format)
{
	int num_chars_printed = 0;

	switch (*format)
	{
		case 'd':
		case 'i':
			num_chars_printed += num_digits(arg);
			print_int(arg);
			break;
		case 'c':
			num_chars_printed++;
			_putchar(arg);
			break;
		case '%':
			num_chars_printed++;
			_putchar('%');
			break;
	}
	return (num_chars_printed);
}
