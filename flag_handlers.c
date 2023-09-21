#include "main.h"
/**
 * get_flagd - checks for available flags and acts accordingly
 * @format: the format string to iterate through
 * @buffer: the buffer to append
 * @sign: defines what operation to make
 * Return: the number of chars to skip
 */
int get_flagd(char *format, char *buffer, int sign)
{
	int i = 1;
	char c = 0;

	while (format[i] != 0)
	{
		if (format[i] == '+')
		{
			c = 43;
			i++;
			continue;
		}
		else if (format[i] == ' ')
		{
			if (c != 43)
				c = 32;
			i++;
			continue;
		}
		else
			break;
	}
	if (c != 0 && sign > 0)
		addto_buff(buffer, c);
	return (i - 1);
}
/**
 * get_flagx - checks for flags availability and acts accordingly
 * @format: the format string
 * @buffer: the buffer to be appended
 * Return: the number of digits to skip
 */
int get_flagx(char *format, char *buffer)
{
	int i = 1;
	char c = 0;

	if (format[i] == '#')
	{
		c = '#';
		i++;
	}
	if (c != 0)
	{
		addto_buff(buffer, 48);
		addto_buff(buffer, 'x');
	}
	return (i - 1);
}
/**
 * get_flagX - checks for available flags and acts accordingly
 * @format: the format string
 * @buffer: the buffer to append
 * Return: the number of digits to skip
 */
int get_flagX(char *format, char *buffer)
{
	int i = 1;
	char c = 0;

	if (format[i] == '#')
	{
		c = '#';
		i++;
	}
	if (c != 0)
	{
		addto_buff(buffer, 48);
		addto_buff(buffer, 'X');
	}
	return (i - 1);
}
/**
 * get_flago - checks for available flags and acts accordingly
 * @format: the format string
 * @buffer: the buffer to append
 * Return: the number of digits to keep
 */
int get_flago(char *format, char *buffer)
{
	int i = 1;
	char c = 0;

	if (format[i] == '#')
	{
		c = '#';
		i++;
	}
	if (c != 0)
		addto_buff(buffer, 48);
	return (i - 1);
}
