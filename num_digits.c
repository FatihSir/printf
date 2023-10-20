#include <stdio.h>


/**
 * num_digits - counts digits printed
 * @num: the number that need to be counted
 * Return: the count
 */
int num_digits(int num)
{
	int count = 0;

	if (num < 0)
	{
		count++;
	}

	while (num != 0)
	{
		num = num / 10;

		count++;
	}
	return (count);
}
