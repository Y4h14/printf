#include "main.h"
/**
 * c_hand - handles a charecter argument
 * @ap: a va_list
 * @buffer: buffer to append
 * @format: the format string
 * Return: (0) if char is not null, (1) otherwise
 */
int c_hand(va_list *ap, char *buffer, char *format)
{
	char c = va_arg(*ap, int);

	format = format;
	addto_buff(buffer, c);
	return (0);
}
/**
 * s_hand - handles a string argumetn
 * @ap: a va_list
 * @buffer: buffer to append
 * @format: the format string
 * Return: (0)
 */
int s_hand(va_list *ap, char *buffer, char *format)
{
	char *c = (char *)va_arg(*ap, char *);

	format = format;
	if (c == NULL)
	{
		print_string("(null)", buffer);
		return (0);
	}
	print_string(c, buffer);
	return (0);
}

/**
 * percent_hand - handles a percent charecter
 * @buffer: buffer to append values to
 * Return: (0)
 */
int percent_hand(char *buffer)
{
	char c = '%';

	addto_buff(buffer, c);
	return (0);
}
/**
 * i_hand - handles an intiger argument
 * @ap: a va_list
 * @buffer: buffer to append values to
 * @buffer: buffer to append
 * @format: the format string
 * Return: (0)
 */
int i_hand(va_list *ap, char *buffer, char *format)
{
	int num = va_arg(*ap, int), i;

	if (num < 0)
	{
		i = get_flagd(format, buffer, -1);
		print_decimal(num, buffer);
		return (i);
	}
	i = get_flagd(format, buffer, 1);
	print_decimal(num, buffer);
	return (i);
}

/**
 * d_hand - handles a decimal arguemnt
 * @ap: a va_list
 * @buffer: buffer to append values to
 * @buffer: buffer to append
 * @format: the format string
 * Return: the number of digits outputed
 */
int d_hand(va_list *ap, char *buffer, char *format)
{
	int num = va_arg(*ap, int), i;

	if (num < 0)
	{
		i = get_flagd(format, buffer, -1);
		print_decimal(num, buffer);
		return (i);
	}
	i = get_flagd(format, buffer, 1);
	print_decimal(num, buffer);
	return (i);
}

