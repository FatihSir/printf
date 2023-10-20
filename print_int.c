#include "main.h"
/**
* print_int - a function that prints integer
*
* @args: the values to be printed
*
* Return: returns the number of digits printed
*/
int print_int(va_list args)
{
	int num = va_arg(args, int);
	char buffer[20];
	int i = 0;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (num > 0)
	{
		buffer[i] = (num % 10) + '0';
		num /= 10;
		i++;
		count++;
	}
	while (i > 0)
	{
		i--;
		_putchar(buffer[i]);
	}
	return (count);
}
