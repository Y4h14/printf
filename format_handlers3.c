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

	if (p == (uintptr_t)NULL)
	{
		print_string("(nil)", buffer);
		return (0);
	}
	addto_buff(buffer, '0');
	addto_buff(buffer, 'x');
	print_hex_ptr(p, buffer);
	return (0);
}
/**
 * r_hand - handles reversing the given string
 * and adds it to the buffer
 * @buffer: the buffer to append
 * @ap: the argument list
 * Return: (0)
 */
int r_hand(va_list *ap, char *buffer)
{
	char *s = va_arg(*ap, char *);

	if (s == 0)
	{
		print_string("(nil)", buffer);
		return (0);
	}
	if (*s == 0)
		return (0);
	print_rev(s, buffer);
	return (0);
}
/**
 * R_hand - handels the R flag for rod13
 * @ap : argument list
 * @buffer: the buffer to append
 * Return: 0
 */
int R_hand(va_list *ap, char *buffer)
{
	char *s = va_arg(*ap, char *);

	if (s == 0)
	{
		print_string("(nil)", buffer);
		return (0);
	}
	if (*s == 0)
		return (0);
	rot13(s, buffer);
	return (0);
}

