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
		return (0);
	}
	print_stringx(s, buffer);
	return (0);
}
/**
 * p_hand - handles pointers
 * @ap: argument list
 * @buffer: the buffer to append to
 * Return: 0
 */
int p_hand(va_list *ap, char *buffer)
{
	uintptr_t p = (uintptr_t)va_arg(*ap, void *);

	if (p == NULL)
	{
		print_string("(nil)", buffer);
		return (0);
	}
	addto_buff(buffer, '0');
	addto_buff(buffer, 'x');
	print_hex_ptr(p, buffer);
	return (0);
}

