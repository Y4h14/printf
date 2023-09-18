#include "main.h"
/**
 * get_format - gets the right handler
 * @c: a character
 * Return: an int
 */
void (*get_format(char c))(va_list * ap, char *buffer)
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
 * spy_cmp - check if a conversion specifier is supported
 * @s1: the character to test
 * Return: 1 if the character is supported, 0 otherwise
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
	int i = 0;

	if (string == 0)
		return (-1);
	for (i = 0; *(string + i) != 0; i++)
		;
	return (i);
}
/**
 * addto_buff - adds a character to the end of the given buffer
 * @buffer: the buffer to append
 * @c: the character to add to the end of the given buffer
 * Return: (void)
 */
void addto_buff(char *buffer, char c)
{
	int len = _strlen(buffer);

	if (*buffer == '\0')
	{
		buffer[0] = c;
		buffer[1] = 0;
		return;
	}
	buffer[len] = c;
	buffer[len + 1] = 0;
}
/**
 * addstr_buff - adds a string to the given buffer
 * @buffer: the string to be appended
 * @src: the string to be added to (buffer)
 * Return: (void)
 */
void addstr_buff(char *buffer, char *src)
{
	int len = _strlen(buffer), i = 0, len2 = _strlen(src);

	if (src == 0 || *src == 0)
		return;
	if (*buffer == '\0')
	{
		while (i < len2)
		{
			buffer[i] = src[i];
			i++;
		}
		buffer[len2] = 0;
		return;
	}
	for (i = 0; i < len2; i++, len++)
		buffer[len] = src[i];
	buffer[len] = '\0';
}
