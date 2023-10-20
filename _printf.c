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
		{"%i", print_int}
	};
	const char *s = format;
	va_list args;
	int num = 0, i = 0, j;

	va_start(args, format);
	if (s == NULL || (s[0] == '%' && s[1] == '\0'))
		return (-1);
start:
	for (; s[i] != '\0'; ++i)
	{
		if (s[i] != '%' || (s[i] == '%' && (s[i + 1] == '!' || s[i + 1] == 'K')))
		{
			_putchar(s[i]);
			num++;
		}
		if (s[i] == '%' && s[i + 1] == '%')
		{
			_putchar('%');
			i = i + 2;
			++num;
		}
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			for (j = 0; j < 4; ++j)
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
