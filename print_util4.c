#include "main.h"
/**
 * print_longX - prints a long int in hex uppercase
 * @n: the number to print
 * @buffer: the buffer we print into
 * Return: (void)
 */
void print_longX(uintmax_t n, char *buffer)
{
	uintmax_t number;
	char c;

	number = n / 16;
	if (number)
		print_longX(number, buffer);
	if (n % 16 < 10)
		c = n % 16 + 48;
	else
		c = ((n % 16) % 10) + 'A';
	addto_buff(buffer, c);
}
/**
 * print_longu - prints a long unsigned int
 * @n: the number to print
 * @buffer: the buffer we print into
 * Return: (void)
 */
void print_longu(uintmax_t n, char *buffer)
{
	uintmax_t number;
	char c;

	number = n / 10;
	if (number)
		print_longu(number, buffer);
	c = n % 10 + 48;
	addto_buff(buffer, c);
}
/**
 * print_shortd - prints a shprt int
 * @n: the number to print
 * @buffer: the buffer to append
 * Return: (void)
 */
void print_shortd(int16_t n, char *buffer)
{
	uint16_t number;
	char curr_char;

	if (n < 0)
	{
		n = -n;
		addto_buff(buffer, '-');
	}

	number = (uint16_t) n / 10;
	if (number)
		print_shortd(number, buffer);
	curr_char = (uint16_t) n % 10 + 48;
	addto_buff(buffer, curr_char);
}
/**
 * print_shorto - prints a short int in octal base
 * @n: the number to print
 * @buffer: the buffer to append
 * Return: (void)
 */
void print_shorto(uint16_t n, char *buffer)
{
	uint16_t number;
	char c;

	number = n / 8;
	if (number)
		print_shorto(number, buffer);
	c = n % 8 + 48;
	addto_buff(buffer, c);
}
/**
 * print_shortu - prints am unsigned short int
 * @n: the number to print
 * @buffer: the buffer to append
 * Return: (void)
 */
void print_shortu(uint16_t n, char *buffer)
{
	uint16_t number;
	char c;

	number = n / 10;
	if (number)
		print_shortu(number, buffer);
	c = n % 10 + 48;
	addto_buff(buffer, c);
}
