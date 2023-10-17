#include "main.h"
/**
* print_char - a function that prints char
*
* @args: the values to be printed
*
* Return: returns nothing
*/
void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}
