#include "main.h"
#include <stdarg.h>
/**
 * b_hand - handles the b conversion specifier
 * @ap: a pointer to an argument list
 * @buffer: buffer to append values to
 * Return: the number of digits outputed
 */
int b_hand(va_list *ap, char *buffer)
{
	unsigned int b = va_arg(*ap, unsigned int);

	print_binary(b, buffer);
	return (0);
}
/**
 * u_hand - handled unsigned intigers
 * @ap: a pointer to an argument list
 * @buffer: buffer to append values to
 * Return: (0)
 */
int u_hand(va_list *ap, char *buffer)
{
	unsigned int u = va_arg(*ap, unsigned int);

	print_uns(u, buffer);
	return (0);
}

/**
 * o_hand - handeles octal conversion
 * @ap: a pointer to an argumetn list
 * @buffer: buffer to append values to
 * Return: (0)
 */
int o_hand(va_list *ap, char *buffer)
{
	unsigned int o = va_arg(*ap, unsigned int);

	print_oct(o, buffer);
	return (0);
}

/**
 * x_hand - handle lower case hex values
 * @ap: a pointer to an argument list
 * @buffer: buffer to append values to
 * Return: (0)
 */
int x_hand(va_list *ap, char *buffer)
{
	unsigned int x = va_arg(*ap, unsigned int);

	print_hex_low(x, buffer);
	return (0);
}
/**
 * X_hand - handle upper case hex values
 * @ap : apointer to an argument list
 * @buffer: buffer to append values to
 * Return: (0)
 */
int X_hand(va_list *ap, char *buffer)
{
	unsigned int X = va_arg(*ap, unsigned int);

	print_hex_up(X, buffer);
	return (0);
}

