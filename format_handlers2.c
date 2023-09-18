#include "main.h"
/**
 * b_hand - handles the b conversion specifier
 * @ap: a pointer to an argument list
 * @buffer: buffer to append
 * Return: the number of digits outputed
 */
int b_hand(va_list *ap, char *buffer)
{
	unsigned int b = va_arg(*ap, unsigned int);

	print_binary(b, buffer);
	return (binary_count(b));
}
/**
 * u_hand - handled unsigned intigers
 * @ap: a pointer to an argument list
 * @buffer: buffer to append
 * Return: the number of digits outputed
 */
int u_hand(va_list *ap, char *buffer)
{
	unsigned int u = va_arg(*ap, unsigned int);

	print_uns(u, buffer);
	return (uns_count(u));
}

/**
 * o_hand - handeles octal conversion
 * @ap: a pointer to an argumetn list
 * @buffer: buffer to append
 * Return: the number of digits outputed
 */
int o_hand(va_list *ap, char *buffer)
{
	unsigned int o = va_arg(*ap, unsigned int);

	print_oct(o, buffer);
	return (oct_count(o));
}

/**
 * x_hand - handle lower case hex values
 * @ap: a pointer to an argument list
 * @buffer: buffer to append
 * Return: the number of chars outputed
 */
int x_hand(va_list *ap, char *buffer)
{
	unsigned int x = va_arg(*ap, unsigned int);

	print_hex_low(x, buffer);
	return (hex_count(x));
}
/**
 * X_hand - handle upper case hex values
 * @ap : apointer to an argument list
 * @buffer: buffer to append
 * Return: the number of chars outputed
 */
int X_hand(va_list *ap, char *buffer)
{
	unsigned int X = va_arg(*ap, unsigned int);

	print_hex_up(X, buffer);
	return (hex_count(X));
}

