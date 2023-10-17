#include "main.h"
/**
* print_string - a function that prints string
*
* @args: the values to be printed
*
* Return: returns nothing
*/
void print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
