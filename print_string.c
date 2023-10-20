#include "main.h"
/**
* print_string - a function that prints string
*
* @args: the values to be printed
*
* Return: returns nothing
*/
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i, len;

	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	else
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
}
