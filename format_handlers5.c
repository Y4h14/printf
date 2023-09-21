#include "main.h"
/**
 * i_short - handles the short decimal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: byte skip
 */
int i_short(va_list *ap, char *buffer, char *format)
{
	int16_t num = (int16_t) va_arg(*ap, int), i;

	if (num < 0)
	{
		i = get_flagd(format, buffer, -1);
		print_shortd(num, buffer);
		return (i + 1);
	}
	i = get_flagd(format, buffer, 1);
	print_longd(num, buffer);
	return (i + 1);
}
/**
 * uns_short - handles the short unsigned decimal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: 1
 */
int uns_short(va_list *ap, char *buffer, char *format)
{
	uint16_t u = (uint16_t) va_arg(*ap, unsigned int);

	format = format;
	print_shortu(u, buffer);
	return (1);
}
/**
 * o_short- handles the short octal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: byte skip
 */
int o_short(va_list *ap, char *buffer, char *format)
{
	uint16_t o = (uint16_t) va_arg(*ap, unsigned int);
	int i;

	i = get_flago(format, buffer);
	print_shorto(o, buffer);
	return (i + 1);
}
/**
 * x_short - handles the short hexadecimal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: byte skip
 */
int x_short(va_list *ap, char *buffer, char *format)
{
	uint16_t x = (uint16_t)va_arg(*ap, unsigned int);
	int i;

	i = get_flagx(format, buffer);
	print_shortx(x, buffer);
	return (i + 1);
}
/**
 * X_short - handles the short hexadecimal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: byte skip
 */
int X_short(va_list *ap, char *buffer, char *format)
{
	uint16_t x = (uint16_t) va_arg(*ap, unsigned int);
	int i;

	i = get_flagx(format, buffer);
	print_shortX(x, buffer);
	return (i + 1);
}
