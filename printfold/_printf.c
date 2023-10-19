#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - Prints a formate string to the standard output
 * @format: a string that contains both text and spercifiers
 * Return: the total number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *format_ptr = format;
	va_list args;
	int count, num_chars_printed = 0, numarg;

	va_start(args, format);

	for (count = 0; *format_ptr != '\0'; ++format_ptr)
	{
		if (*format_ptr != '%')
		{
			_putchar(*format_ptr);
			num_chars_printed++;
		}
		else if (*(format_ptr + 1) == 's')
		{
			format_ptr++;
			num_chars_printed += merstr(va_arg(args, char *), count);
		}
		else
		{
			numarg = va_arg(args, int);
			format_ptr++;
			num_chars_printed += swistr(numarg, format_ptr);
		}
		count++;
	}
	va_end(args);
	return (num_chars_printed);
}
