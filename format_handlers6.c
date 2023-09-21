#include "main.h"
/**
 * d_short- handles long decimal conversion specifier
 * @ap : argument list
 * @buffer: the buffer to append values to
 * @format: the format string
 * Return: byte skip
 */
int d_short(va_list *ap, char *buffer, char *format)
{
	int16_t num = (int16_t) va_arg(*ap, int), i;

	if (num < 0)
	{
		i = get_flagd(format, buffer, -1);
		print_shortd(num, buffer);
		return (i + 1);
	}
	i = get_flagd(format, buffer, 1);
	print_shortd(num, buffer);
	return (i + 1);
}
