

/**
 * _strlen - Prints the length of the string
 * @str: the string to be counted
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}


