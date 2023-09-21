#include "main.h"
/**
 * _printf - takes the format string and replaces the supported
 * directives by its equivalent argument
 * @format: the string to format
 * Return: the number characters printed to the screen
 */
int _printf(const char *format, ...)
{
	int i;
	int (*spec)(va_list *ap, char *buffer, char *format);
	char  c, len, buffer[1024] = "\0";
	va_list arg_list;
	va_list *va_ptr = &arg_list;

	if (format == NULL)
		return (-1);
	if (*format == 0)
		return (0);
	va_start(arg_list, format);
	for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] != '%')
			addto_buff(buffer, format[i]);
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			percent_hand(buffer);
			i++;
			continue;
		}
		else
		{
			c = spy_spec((char *)format + i);
			if (c == 0)
			{
				percent_hand(buffer);
				continue;
			}
			len = spy_len((char *)format + i);
			if (len)
				spec = get_long(len, c);
			else
				spec = get_format(c);
			i += spec(va_ptr, buffer, (char *)(format + i)) + 1;
		}
	}
	write(1, buffer, _strlen(buffer));
	va_end(arg_list);
	return (_strlen(buffer));
}

