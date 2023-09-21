#include "main.h"
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
/**
 * print_longd - prints a large decimal
 * @n: the decimal to print
 * @buffer: the buffer to append
 * Return: void
 */
void print_longd(intmax_t n, char *buffer)
{
	uintmax_t number;
	char curr_char;

	if (n < 0)
	{
		n = n * (-1);
		addto_buff(buffer, '-');
	}

	number = (uintmax_t) n / 10;
	if (number)
		print_longd(number, buffer);
	curr_char = (uintmax_t) n % 10 + 48;
	addto_buff(buffer, curr_char);
}
/**
 * print_longo - prints a long int in octal base
 * @n: the number to print
 * @buffer: the buffer we print in
 * Return: void
 */
void print_longo(uintmax_t n, char *buffer)
{
	uintmax_t number;
	char c;

	number = n / 8;
	if (number)
		print_longo(number, buffer);
	c = n % 8 + 48;
	addto_buff(buffer, c);
}
/**
 * print_longx - prints a long int in hex base
 * @n: the number to print
 * @buffer: the buffer we print in
 * Return: (void)
 */
void print_longx(uintmax_t n, char *buffer)
{
	uintmax_t number;
	char c;

	number = n / 16;
	if (number)
		print_longx(number, buffer);
	if (n % 16 < 10)
		c = n % 16 + 48;
	else
		c = ((n % 16) % 10) + 'a';
	addto_buff(buffer, c);
}
