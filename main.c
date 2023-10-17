#include "main.h"
#include <limits.h>
/**
* main - testing function
* Return: always returns 0
*
*/
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("This %d %s %d but %%%c\n", 193, "and", 296, 'A');
	return (0);
}
