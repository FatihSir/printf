#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * merstr - Merges two string from skipping character defined by position
 * @position: The where you want to edit the sting
 * @arg: The argument sting that will be merged into the formate sting
 * Return: The number of characters printed
 */
int merstr(char *arg, int position)
{
	char *buffer;
	char temp;
	int count = 0;
	int buflength;

	buflength = _strlen(arg);
	buffer = malloc(sizeof(char) * buflength);

/*
 * decresing postion to move behind %
 */
	position--;

/*
 * coping string from format to buffer until position
 */
	while (*(arg + count) != '\0')
	{
		temp = *(arg + count);
		*(buffer + count) = temp;
		count++;
	}

/*
 * getting length
 */
	buflength = _strlen(buffer);

/*
 * printing sting
 */
	printstr(buffer, buflength);
	free(buffer);

	return (buflength);
}
