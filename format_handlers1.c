#include "main.h"
/**
 * c_hand - handles a charecter argument
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: (1) if arg is 0, (0) otherwise
 */
int c_hand(va_list *ap, char *buffer)
{
	char c = va_arg(*ap, int);
	
	addto_buff(buffer, c);
	if (c == 0)
		return (1);
	else 
		return (0);
}

/**
 * s_hand - handles a string argumetn
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: always (0)
 */
int s_hand(va_list *ap, char *buffer)
{
	char *c = (char *)va_arg(*ap, char *);

	if (c == NULL)
		addstr_buff(buffer, "(null)");
	addstr_buff(buffer, c);
	return (0);
}

/**
 * percent_hand - handles a percent charecter
 * @buffer: buffer to append
 * Return: always (0)
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
 * @buffer: buffer to append
 * Return: always (0)
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
 * @buffer: buffer to append
 * Return: always (0)
 */
int d_hand(va_list *ap, char *buffer)
{
	int num = va_arg(*ap, int);

	print_decimal(num, buffer);
	return (0);
}

