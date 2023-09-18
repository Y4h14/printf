#include "main.h"
/**
 * print_oct - prints an int as octal number
 * @n: an unsigned int
 * @buffer: buffer to append
 * Return: nothing
 */
void print_oct(unsigned int n, char *buffer)
{
	unsigned int number;
	char c;

	number = n / 8;
	if (number)
		print_oct(number, buffer);
	c = n % 8 + 48;
	addto_buff(buffer, c);
}
/**
 * print_hex_low - pritns an int as small letter hex
 * @n: unsigned int
 * @buffer: buffer to append
 * Return: nothing
 */
void print_hex_low(unsigned int n, char *buffer)
{
	unsigned int number;
	char c;

	number = n / 16;
	if (number)
		print_hex_low(number, buffer);
	if (n % 16 < 10)
		c = n % 16 + 48;
	else
		c = ((n % 16) % 10) + 'a';
	addto_buff(buffer, c);
}

/**
 * print_hex_up - print an int as a capital letter hex
 * @n: unsigned int;
 * @buffer: buffer to append
 * Return: nothing
 */
void print_hex_up(unsigned int n, char *buffer)
{
	unsigned int number;
	char c;

	number = n / 16;
	if (number)
		print_hex_up(number, buffer);
	if (n % 16 < 10)
		c = n % 16 + 48;
	else
		c = ((n % 16) % 10) + 'A';
	addto_buff(buffer, c);
}
/**
 * print_uns - prints an unsigned int
 * @n: an unsigned int
 * @buffer: buffer to append
 * Return: nothing
 */
void print_uns(unsigned int n, char *buffer)
{
	unsigned int number;
	char c;

	number = n / 10;
	if (number)
		print_uns(number, buffer);
	c = n % 10 + 48;
	addto_buff(buffer, c);
}
/**
 * print_binary - prints a binary to the output
 * @n: the number to convert and print in binary
 * @buffer: buffer to append
 * Return: (void)
 */
void print_binary(unsigned int n, char *buffer)
{
	unsigned int number;
	char c;

	number = n / 2;
	if (number)
		print_binary(number, buffer);
	c = n % 2 + 48;
	addto_buff(buffer, c);
}

