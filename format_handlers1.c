#include "main.h"
/**
 * c_hand - handles a charecter argument
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: (1) always
 */
int c_hand(va_list *ap, char *buffer)
{
	char c = va_arg(*ap, int);

	addto_buff(buffer, c);
	return (1);
}
/**
 * s_hand - handles a string argumetn
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: the length of the string added to the buffer
 */
int s_hand(va_list *ap, char *buffer)
{
	char *c = (char *)va_arg(*ap, char *);

	if (c == NULL)
	{
		addstr_buff(buffer, "(null)");
		return (_strlen("(null)"));
	}
	addstr_buff(buffer, c);
	return (_strlen(c));
}

/**
 * percent_hand - handles a percent charecter
 * @buffer: buffer to append
 * Return: always (1)
 */
int percent_hand(char *buffer)
{
	char c = '%';

	addto_buff(buffer, c);
	return (1);
}
/**
 * i_hand - handles an intiger argument
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: the number of digits outputed
 */
int i_hand(va_list *ap, char *buffer)
{
	int num = va_arg(*ap, int);

	print_decimal(num, buffer);
	return (decimal_count(num));
}

/**
 * d_hand - handles a decimal arguemnt
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: the number of digits outputed
 */
int d_hand(va_list *ap, char *buffer)
{
	int num = va_arg(*ap, int);

	print_decimal(num, buffer);
	return (decimal_count(num));
}

