#include "main.h"
#include <complex.h>
#include <stdarg.h>
/**
 * b_hand - handles the b conversion specifier
 * @ap: a pointer to an argument list
 * @buffer: buffer to append
 * @format: the format string
 * Return: (0)
 */
int b_hand(va_list *ap, char *buffer, char *format)
{
	unsigned int b = va_arg(*ap, unsigned int);

	format = format;
	print_binary(b, buffer);
	return (0);
}
/**
 * u_hand - handled unsigned intigers
 * @ap: a pointer to an argument list
 * @format: the format string
 * @buffer: buffer to append
 * Return: (0)
 */
int u_hand(va_list *ap, char *buffer, char *format)
{
	unsigned int u = va_arg(*ap, unsigned int);

	format = format;
	print_uns(u, buffer);
	return (0);
}

/**
 * o_hand - handeles octal conversion
 * @ap: a pointer to an argumetn list
 * @format: the format string
 * @buffer: buffer to append
 * Return: the number of bytes to skip
 */
int o_hand(va_list *ap, char *buffer, char *format)
{
	unsigned int o = va_arg(*ap, unsigned int);
	int i;

	i = get_flago(format, buffer);
	print_oct(o, buffer);
	return (i);
}

/**
 * x_hand - handle lower case hex values
 * @ap: a pointer to an argument list
 * @format: the format string
 * @buffer: buffer to append
 * Return: the number of bytes to skip
 */
int x_hand(va_list *ap, char *buffer, char *format)
{
	unsigned int x = va_arg(*ap, unsigned int);
	int i;

	i = get_flagx(format, buffer);
	print_hex_low(x, buffer);
	return (i);
}
/**
 * X_hand - handle upper case hex values
 * @ap : apointer to an argument list
 * @format: the format string
 * @buffer: buffer to append
 * Return: the number of bytes to skip
 */
int X_hand(va_list *ap, char *buffer, char *format)
{
	unsigned int X = va_arg(*ap, unsigned int);
	int i;

	i = get_flagX(format, buffer);
	print_hex_up(X, buffer);
	return (i);
}

