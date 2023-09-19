#include "main.h"
/**
 * print_rev - adds the reversed version of a string to
 * the buffer
 * @buffer: the buffer to be appended
 * @string: the string to be reversed
 * Return: (void)
 */
void print_rev(char *string, char *buffer)
{
	if (*string == 0)
		return;
	print_rev(string + 1, buffer);
	addto_buff(buffer, *string);
}
