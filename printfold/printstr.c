#include <unistd.h>

/**
 * printstr - Print string of the given length
 * @str: string to print
 * @len: amount of characters to print
 * Return: nothing
 */
void printstr(char *str, int len)
{
/*
 * print the string up to the given length
 */
	write(1, str, len);
}
