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
