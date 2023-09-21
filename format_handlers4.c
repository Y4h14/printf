#include "main.h"
/**
 * i_long - handles the long decimal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: byte skip
 */
int i_long(va_list *ap, char *buffer, char *format)
{
	intmax_t num = va_arg(*ap, intmax_t), i;

	if (num < 0)
	{
		i = get_flagd(format, buffer, -1);
		print_longd(num, buffer);
		return (i + 1);
	}
	i = get_flagd(format, buffer, 1);
	print_longd(num, buffer);
	return (i + 1);
}
/**
 * uns_long - handles the long unsigned decimal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: 0
 */
int uns_long(va_list *ap, char *buffer, char *format)
{
	uintmax_t u = va_arg(*ap, uintmax_t);

	format = format;
	print_longu(u, buffer);
	return (1);
}
/**
 * o_long - handles the long octal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: byte skip
 */
int o_long(va_list *ap, char *buffer, char *format)
{
	uintmax_t o = va_arg(*ap, uintmax_t);
	int i;

	i = get_flago(format, buffer);
	print_longo(o, buffer);
	return (i + 1);
}
/**
 * x_long - handles the long hexadecimal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: byte skip
 */
int x_long(va_list *ap, char *buffer, char *format)
{
	uintmax_t x = va_arg(*ap, uintmax_t);
	int i;

	i = get_flagx(format, buffer);
	print_longx(x, buffer);
	return (i + 1);
}
/**
 * X_long - handles the long hexadecimal conversion specifier
 * @ap: the argument list
 * @format: the format string
 * @buffer: the buffer to append
 * Return: byte skip
 */
int X_long(va_list *ap, char *buffer, char *format)
{
	uintmax_t x = va_arg(*ap, uintmax_t);
	int i;

	i = get_flagx(format, buffer);
	print_longX(x, buffer);
	return (i + 1);
}
