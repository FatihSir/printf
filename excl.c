#include "main.h"
/**
* excl - function to print exclamation
* @args: value to be printed
* Return: the number of digits printed
*/
int excl(va_list args)
{
	va_arg(args, int);
	_putchar('%');
	_putchar('!');

	return (2);
}
