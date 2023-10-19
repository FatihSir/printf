#include "main.h"
/**
* percent - funtion prints %
* @args: value to be printed
* Return: returns 1
*
*/
int percent(va_list args)
{
	va_arg(args, int);
	_putchar('%');
	return (1);
}
