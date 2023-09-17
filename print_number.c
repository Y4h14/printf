#include "main.h"
/**
 * print_oct - prints an int as octal number
 * @n: an unsigned int
 * Return: nothing
 */
void print_oct(unsigned int n)
{
	unsigned int number;
	char c;

	number = n / 8;
	if (number)
		print_oct(number);
	c = n % 8 + 48;
	write(1, &c, 1);
}
/**
 * print_hex_small - pritns an int as small letter hex
 * @n: unsigned int
 * Return: nothing
 */
void print_hex_small(unsigned int n)
{
	unsigned int number;
	char c;

	number = n / 16;
	if (number)
		print_hex_small(number);
	if (n % 16 < 10)
		c = n % 16 + 48;
	else
		c = ((n % 16) % 10) + 'a';
	write(1, &c, 1);
}

/**
 * print_hex_cap - print an int as a capital letter hex
 * @n: unsigned int;
 * Return: nothing
 */
void print_hex_cap(unsigned int n)
{
	unsigned int number;
	char c;

	number = n / 16;
	if (number)
		print_hex_cap(number);
	if (n % 16 < 10)
		c = n % 16 + 48;
	else
		c = ((n % 16) % 10) + 'A';
	write(1, &c, 1);
}
/**
 * print_uns - prints an unsigned int
 * @n: an unsigned int
 * Return: nothing
 */
void print_uns(unsigned int n)
{
	unsigned int number;
	char c;

	number = n / 10;
	if (number)
		print_uns(number);
	c = n % 10 + 48;
	write(1, &c, 1);
}

