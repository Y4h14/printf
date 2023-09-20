#include "main.h"
/**
 * init_buffer - initializes a buffer 1024 bytes long to
 * @buffer: the buffer to be initialized
 * Return: (void)
 */
void init_buffer(char *buffer)
{
	int len = 1024, i = 0;

	if (buffer == NULL)
		return;
	while (i < len - 1)
	{
		buffer[i] = '\0';
		i++;
	}
	buffer[i] = 0;
}
/**
 * spy_spec - finds if a supported conversion specifier can be found
 * @format: the string we are looking into
 * Return: the conversion specifier if found, a null byte otherwise
 */
char spy_spec(char *format)
{
	int i = 0;

	while (*(format + i) != 0)
	{
		if (spy_cmp(*(format + i)))
			return (*(format + i));
		i++;
	}
	return (0);
}

