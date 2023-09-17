#include "main.h"
#include <stdarg.h>
/**
 * b_hand - handles the b conversion specifier
 * @ap: a pointer to an argument list
 * Return: the number of characters outputed
 */
int b_hand(va_list *ap)
{
	unsigned int b = va_arg(*ap, unsigned int);

	print_binary(b);
	return (binary_count(b));
}
/**
 * u_hand - handled unsigned intigers
 * @ap: a pointer to an argument list
 * Return: the number of char outputed
 */
int u_hand(va_list *ap)
{
	unsigned int u = va_arg(*ap, unsigned int);

	print_uns(u);
	return (uns_count(u));
}

/**
 * o_hand - handeles octal conversion
 * @ap: a pointer to an argumetn list
 * Return: number of char outputed
 */
int o_hand(va_list *ap)
{
	unsigned int o = va_arg(*ap, unsigned int);

	print_oct(o);
	return (oct_count(o));
}

/**
 * x_hand - handle lower case hex values
 * @ap: a pointer to an argument list
 * Return: number of char outputed
 */
int x_hand(va_list *ap)
{
	unsigned int x = va_arg(*ap, unsigned int);

	print_hex_small(x);
	return (hex_count(x));
}
/**
 * X_hand - handle upper case hex values
 * @ap : apointer to an argument list
 * Return: number of char outputed
 */
int X_hand(va_list *ap)
{
	unsigned int X = va_arg(*ap, unsigned int);

	print_hex_cap(X);
	return (hex_count(X));

}



