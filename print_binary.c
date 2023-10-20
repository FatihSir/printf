#include "main.h"
/**
* print_binary - a function prints binary number .
* @args: a value to be converted
* Return: always returns 1
*/
int print_binary(va_list args)
{
	int f = 0;
	int conut = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			f = 1;
		if (f)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			conut++;
		}
	}
	if (conut == 0)
	{
		conut++;
		_putchar('0');
	}
	return (conut);
}
