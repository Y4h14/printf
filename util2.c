#include "main.h"
#include <stdarg.h>
/**
 * spy_spec - finds if a supported conversion specifier can be found
 * @format: the string we are looking into
 * Return: the conversion specifier if found, a null byte otherwise
 */
char spy_spec(char *format)
{
	int i = 0;

	while (*(format + i) != 0)
	{
		if (spy_cmp(*(format + i)))
			return (*(format + i));
		i++;
	}
	return (0);
}
/**
 * spy_len - finds if a supported length modifier can be found
 * @format: the string to iterate through
 * Return: the length specifier if found, a null byte otherwise
 */
char spy_len(char *format)
{
	int i = 1;

	while (i < 4)
	{
		if (format[i] == 'l' || format[i] == 'h')
			return (*(format + i));
		i++;
	}
	return (0);
}
/**
 * get_long - stores and returns the appropriate format handler
 * @len: length specifier
 * @spec: conversion specifier
 * Return: the approriate handler to execute
 */
int (*get_long(char len, char spec))(va_list * ap, char *buffer, char *format)
{
	f_handler hand_list[] = {
		{"ld", d_long},
		{"hd", d_short},
		{"li", i_long},
		{"hi", i_short},
		{"lu", uns_long},
		{"hu", uns_short},
		{"lx", x_long},
		{"hx", x_short},
		{"lX", X_long},
		{"hX", X_short},
		{"lo", o_long},
		{"ho", o_short},
		{NULL, NULL}
	};
	char buffer[2];
	int i = 0;

	buffer[0] = len;
	buffer[1] = spec;
	while (i < 13)
	{
		if (str_cmp(hand_list[i].spec, buffer))
			return (hand_list[i].f);
		i++;
	}
	return (NULL);
}
/**
 * str_cmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: (1) if identical, (0) otherwise
 */
int str_cmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
		if (s1[i] != s2[i])
			return (0);
	return (1);
}
/**
 * percent_case - handles the case of a percent sign
 * @i: the index of the percent sign
 * @buffer: the buffer to print to
 * Return: (void)
*/
void percent_case(int *i, char *buffer)
{
	addto_buff(buffer, '%');
	*i += 1;
}
