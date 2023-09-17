#include "main.h"
/**
 * _strlen - calculates the length if a string
 * @string: the string operateed on
 * Return: (-1)if the string is (NULL), otherwise,
 * we return the length of the string
 */
int _strlen(const char *string)
{
	int i;

	if (string == 0)
		return (-1);
	for (i = 0; *(string + i) != '\0'; i++)
		;
	return (i);
}

