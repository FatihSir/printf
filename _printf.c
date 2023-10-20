#include "main.h"
/**
* _printf - a function that prints anything
* @format:  is a list of types of arguments passed to the function*
* Return: returns nothing
*/
int _printf(const char *format, ...)
{
	p_dtype tok[] = {
		{"%s", print_string}, {"%d", print_d}, {"%c", print_char},
		{"%i", print_int}, {"%b", print_binary}
	};
	const char *s = format;
	va_list args;
	int num = 0, i = 0, j;

	va_start(args, format);
	if (s == NULL || (s[0] == '%' && s[1] == '\0'))
		return (-1);
start:
	while (s[i] != '\0')
	{
		if (s[i] != '%' || (s[i] == '%' && (s[i + 1] == '!' || s[i + 1] == 'K')))
		{
			_putchar(s[i]);
			num++;
			i++;
		}
		if (s[i] == '%' && s[i + 1] == '%')
		{
			i = i + 2;
			num = num + percent();
		}
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			for (j = 0; j < 5; ++j)
			{
				if (s[i + 1] == tok[j].specifer[1])
				{
					num = num + tok[j].ops(args);
					i = i + 2;
					goto start;
				}
			}
		}
	}
	va_end(args);
	return (num);
}
