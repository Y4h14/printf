#include "main.h"
/**
 * S_hand - handles strings with special characters conversion
 * specifier
 * @ap: the list of arguments
 * @buffer: the buffer to append
 * Return: (void)
 */
int S_hand(va_list *ap, char *buffer)
{
	char *s = va_arg(*ap, char *);

	if (s == 0)
	{
		print_string("(null)", buffer);
		return (_strlen("(null)"));
	}
	print_stringx(s, buffer);
	return (_strlen(s));
}
