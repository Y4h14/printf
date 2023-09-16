#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
