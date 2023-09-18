#include "main.h"
/**
 * b_hand - handles the b conversion specifier
 * @ap: a pointer to an argument list
 * @buffer: buffer to append
 * Return: the number of characters outputed
 */
void b_hand(va_list *ap, char *buffer)
{
	unsigned int b = va_arg(*ap, unsigned int);

	print_binary(b, buffer);
}
/**
 * u_hand - handled unsigned intigers
 * @ap: a pointer to an argument list
 * @buffer: buffer to append
 * Return: (void)
 */
void u_hand(va_list *ap, char *buffer)
{
	unsigned int u = va_arg(*ap, unsigned int);

	print_uns(u, buffer);
}

/**
 * o_hand - handeles octal conversion
 * @ap: a pointer to an argumetn list
 * @buffer: buffer to append
 * Return: (void)
 */
void o_hand(va_list *ap, char *buffer)
{
	unsigned int o = va_arg(*ap, unsigned int);

	print_oct(o, buffer);
}

/**
 * x_hand - handle lower case hex values
 * @ap: a pointer to an argument list
 * @buffer: buffer to append
 * Return: (void)
 */
void x_hand(va_list *ap, char *buffer)
{
	unsigned int x = va_arg(*ap, unsigned int);

	print_hex_low(x, buffer);
}
/**
 * X_hand - handle upper case hex values
 * @ap : apointer to an argument list
 * @buffer: buffer to append
 * Return: (void)
 */
void X_hand(va_list *ap, char *buffer)
{
	unsigned int X = va_arg(*ap, unsigned int);

	print_hex_up(X, buffer);
}

