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

