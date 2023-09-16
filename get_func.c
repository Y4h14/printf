#include "main.h"
#include <stdio.h>
/**
 * get_format - gets the right handler
 * @c: a character
 * Return: an int
 */
int (*get_format(char c))(va_list * ap)
{
	f_handler formats[] = {
	{"d", d_hand},
	{"c", c_hand},
	{"s", s_hand},
	{"%", percent_hand},
	{"i", i_hand},
	{NULL, NULL}
	};
	int i = 0;
	char *ptr = &c;

	while (i < 5)
	{
		if (*ptr == formats[i].spec[0])
			return (formats[i].f);
	i++;
	}
	return (NULL);
}
