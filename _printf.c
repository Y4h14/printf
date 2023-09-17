#include "main.h"
/**
 * _printf - takes the format string and replaces the supported
 * directives by its equivalent argument
 * @format: the string to format
 * Return: the number characters printed to the screen
 */
int _printf(const char *format, ...)
{
	int i, count = 0, check = 0;
	int (*func)(va_list *ap);
	char  c;
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
		{
			write(1, format + i, 1);
			count++;
		}
		else
		{

			if (format[i + 1] == 32)
			{
				for (i = i + 1; format[i + 1] == 32; i++)
					check = 1;
			}
			if (check == 1 && (format[i + 1] == 'd' || format[i + 1] == 'i'))
				write(1, " ", 1);
			if (!spy_cmp(format[i + 1]) && format[i + 1] != 32)
			{
				count += percent_hand();
				continue;
			}
			func = get_format(c = format[i + 1]);
			count += func(va_ptr);
			i++;
		}
	}
	va_end(arg_list);
	return (count);
}

