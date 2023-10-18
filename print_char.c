#include "main.h"
/**
* print_char - a function that prints char
*
* @args: the values to be printed
*
* Return: returns nothing
*/
int print_char(va_list args)
{
	char c = va_arg(args, int);

	if (c != '\0')
		_putchar(c);
		return (1);
	return (0);
}
