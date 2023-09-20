#include "main.h"
/**
 * c_hand - handles a charecter argument
 * @ap: a va_list
 * @buffer: buffer to append values to
 * Return: (0) if char is not null, (1) otherwise
 */
int c_hand(va_list *ap, char *buffer)
{
	char c = va_arg(*ap, int);

	if (c == 0)
		return (1);
	addto_buff(buffer, c);
	return (0);
}
/**
 * s_hand - handles a string argumetn
 * @ap: a va_list
 * @buffer: buffer to append values to
 * Return: (0)
 */
int s_hand(va_list *ap, char *buffer)
{
	char *c = (char *)va_arg(*ap, char *);
	char *str = '\0';

	if (c == NULL)
	{
		print_string("(null)", buffer);
		return (0);
	}
	if (_strlen(c) > 1023)
	{
		str = _strncpy(str, c, 1023);
		print_string(str, buffer);
	}
	else
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
 * Return: (0)
 */
int i_hand(va_list *ap, char *buffer)
{
	int num = va_arg(*ap, int);

	print_decimal(num, buffer);
	return (0);
}

/**
 * d_hand - handles a decimal arguemnt
 * @ap: a va_list
 * @buffer: buffer to append values to
 * Return: the number of digits outputed
 */
int d_hand(va_list *ap, char *buffer)
{
	int num = va_arg(*ap, int);

	print_decimal(num, buffer);
	return (0);
}

