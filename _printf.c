#include "main.h"
#include <stdarg.h>
/**
 * _printf - takes the format string and replaces the supported
 * directives by its equivalent argument
 * @format: the string to format
 * Return: the number characters printed to the screen
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	int (*func)(va_list *ap);
	char  c;
	va_list arg_list;
	va_list *va_ptr = &arg_list;
	

	if (format == 0 )
		return (-1);
	if (*format == 0)
		return (0);

	va_start(arg_list, format);
	for (i = 0; i < _strlen(format); i++)
	{
<<<<<<< HEAD
		if (format[i] != '%')
=======
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(arg_list, int);
					write(1, &c, 1);
					count++;
					break;
				case 's':
					temp = va_arg(arg_list, char *);
					write(1, temp, _strlen(temp));
					count += _strlen(temp);
					break;
				case 'd':
					x = va_arg(arg_list, int);
					print_number(x);
					count += digit_count(x);
					break;
				case 'i':
					x = va_arg(arg_list, int);
					print_number(x);
					count += digit_count(x);
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				default:
					write(1, "%", 1);
					count++;
					i--; 
					break;
			}
			i++;
		}
		else
>>>>>>> 5aaf03455f44f6d4c72bcf86cd9539178c9db513
		{
			write(1, format + i, 1);
			count++;
		}
		else
		{
			if (!spy_cmp(format[i + 1]))
			{
				
				continue;
			}

			c = format[i + 1];
			func = get_format(c);
			if (func == NULL)
				printf("epic faliure :(");
			else
				count += func(va_ptr);
			count++;
			i++;
		}
	}
	va_end(arg_list);
	return (count);
}
