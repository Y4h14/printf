#include "main.h"
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
	{"b", b_hand},
	{"u", u_hand},
	{"o", o_hand},
	{"x", x_hand},
	{"X", X_hand},
	{NULL, NULL}
	};
	int i = 0;
	char *ptr = &c;

	while (i < 11)
	{
		if (*ptr == formats[i].spec[0])
			return (formats[i].f);
	i++;
	}
	return (NULL);
}
/**
 * spy_cmp - check if a charecter is special
 * @s1: a charecter
 * Return: 1 if the charecter is special
 */
int spy_cmp(char s1)
{
	int i = 0;

	char str[] = "discbuxXo%";

	while (i < 10)
	{
		if (str[i] == s1)
			return (1);
		i++;
	}
	return (0);
}
/**
 * _strlen - calculates the length if a string
 * @string: the string operateed on
 * Return: (-1)if the string is (NULL), otherwise,
 * we return the length of the string
 */
int _strlen(const char *string)
{
	int i;

	if (string == 0)
		return (-1);
	for (i = 0; *(string + i) != '\0'; i++)
		;
	return (i);
}

