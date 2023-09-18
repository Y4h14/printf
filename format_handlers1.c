#include "main.h"
/**
 * c_hand - handles a charecter argument
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: (void)
 */
void c_hand(va_list *ap, char *buffer)
{
	char c = va_arg(*ap, int);

	addto_buff(buffer, c);
}

/**
 * s_hand - handles a string argumetn
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: (void)
 */
void s_hand(va_list *ap, char *buffer)
{
	char *c = (char *)va_arg(*ap, char *);

	if (c == NULL)
		addstr_buff(buffer, "(null)");
	addstr_buff(buffer, c);
}

/**
 * percent_hand - handles a percent charecter
 * @buffer: buffer to append
 * Return: nothing
 */
void percent_hand(char *buffer)
{
	char c = '%';

	addto_buff(buffer, c);
}

/**
 * i_hand - handles an intiger argument
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: (void)
 */
void i_hand(va_list *ap, char *buffer)
{
	int num = va_arg(*ap, int);

	print_decimal(num, buffer);
}

/**
 * d_hand - handles a decimal arguemnt
 * @ap: a va_list
 * @buffer: buffer to append
 * Return: (void)
 */
void d_hand(va_list *ap, char *buffer)
{
	int num = va_arg(*ap, int);

	print_decimal(num, buffer);
}

