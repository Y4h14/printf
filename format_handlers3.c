#include "main.h"
/**
 * S_hand - handles strings with special characters conversion
 * specifier
 * @ap: the list of arguments
 * @format: the format string
 * @buffer: the buffer to append
 * Return: (void)
 */
int S_hand(va_list *ap, char *buffer, char *format)
{
	char *s = va_arg(*ap, char *);

	format = format;
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
 * @format: the format string
 * @buffer: the buffer to append to
 * Return: 0
 */
int p_hand(va_list *ap, char *buffer, char *format)
{
	uintptr_t p = (uintptr_t)va_arg(*ap, void *);

	format = format;
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
 * @buffer: the buffer to append values to
 * @format: the format string
 * @ap: the argument list
 * Return: (0)
 */
int r_hand(va_list *ap, char *buffer, char *format)
{
	char *s = va_arg(*ap, char *);

	format = format;
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
 * @buffer: the buffer to append values to
 * @format: the format string
 * Return: 0
 */
int R_hand(va_list *ap, char *buffer, char *format)
{
	char *s = va_arg(*ap, char *);

	format = format;
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
/**
 * d_long - handles long decimal conversion specifier
 * @ap : argument list
 * @buffer: the buffer to append values to
 * @format: the format string
 * Return: byte skip
 */
int d_long(va_list *ap, char *buffer, char *format)
{
	intmax_t num = va_arg(*ap, intmax_t);
	int i;

	if (num < 0)
	{
		i = get_flagd(format, buffer, -1);
		print_longd(num, buffer);
		return (i + 1);
	}
	i = get_flagd(format, buffer, 1);
	print_longd(num, buffer);
	return (i + 1);
}
