#include "main.h"
/**
* _printf - a function that prints anything
* @format:  is a list of types of arguments passed to the function*
* Return: returns nothing
*/
int _printf(const char *format, ...)
{
	p_dtype tok[] = {
		{"%s", print_string},
		{"%d", print_int},
		{"%c", print_char},
		{"%i", print_int}
	};
	const char *str = format;
	va_list args;
	int num_chars_printed = 0, i, j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				_putchar('%');
			}
			for (j = 0; j < 4 ; ++j)
			{
				if (str[i + 1] == tok[j].specifer[1])
				{
					tok[j].ops(args);
				}
			}
			i++;
		}
		else
		{
			_putchar(str[i]);
			num_chars_printed++;
		}
	}
	va_end(args);
	return (num_chars_printed);
}
