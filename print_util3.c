#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: copy distination string
 * @src: copy source string
 * @n: int for the lenth of the copied string
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
 * print_rev - adds the reversed version of a string to
 * the buffer
 * @buffer: the buffer to be appended
 * @string: the string to be reversed
 * Return: (void)
 */
void print_rev(char *string, char *buffer)
{
	if (*string == 0)
		return;
	print_rev(string + 1, buffer);
	addto_buff(buffer, *string);
}
/**
 * rot13 - move each charecter in a string
 * @str: a string of charecters from A - Z
 * @buffer: the printf main buffer
 * Return: a new modified encoded string
 */
void rot13(char *str, char *buffer)
{
	char c;

	if (*str == 0)
		return;
	c = str[0];
	if ((c < 'N' && c >= 'A') || (c < 'n' && c >= 'a'))
		c += 13;

	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		c -= 13;
	addto_buff(buffer, c);
	rot13(str + 1, buffer);
}
