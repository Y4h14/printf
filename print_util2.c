#include "main.h"
/**
 * print_decimal - adds an integer to the buffer
 * @n: the number to be printed
 * @buffer: buffer to append
 * Return: void
 */
void print_decimal(int n, char *buffer)
{
	unsigned int number;
	char curr_char;

	if (n < 0)
	{
		n = -n;
		addto_buff(buffer, '-');
	}

	number = (unsigned int) n / 10;
	if (number)
		print_decimal(number, buffer);
	curr_char = (unsigned int) n % 10 + 48;
	addto_buff(buffer, curr_char);
}
/**
 * print_string - adds a string to the buffer
 * @string: the string to be added to buffer
 * @buffer: the string to be appended
 * Return: (void)
 */
void print_string(char *string, char *buffer)
{
	int i = 0;

	if (*string == 0)
		return;
	addto_buff(buffer, *string);
	i++;
	print_string(string + i, buffer);
}
/**
 * print_stringx - adds a string to the buffer, non-printable chars are
 * represented in hex, preceeded by \x
 * @string: the string to be added to the buffer
 * @buffer: the string to be appended
 * Return: void
 */
void print_stringx(char *string, char *buffer)
{
	int i = 0;
	unsigned char c;

	if (*(string + i) == 0)
		return;
	c = (unsigned int) *(string + i);
	if ((c < 32 && c > 0) || c >= 127)
	{
		addto_buff(buffer, '\\');
		addto_buff(buffer, 'x');
		if (hex_count(c) == 1)
		{
			addto_buff(buffer, 48);
			print_hex_less(c, buffer, 1);
		}
		else
			print_hex_less(c, buffer, 0);
	}
	else
		addto_buff(buffer, *(string + i));
	i++;
	print_stringx(string + i, buffer);
}
/**
 * print_hex_less - prints exactly the first two digits
 * of the hex number x
 * @x: the number to print
 * @buffer: the buffer to append
 * @count: how many characters to add to buffer
 * Return: (void)
 */
void print_hex_less(unsigned int x, char *buffer, unsigned int count)
{
	unsigned int number;
	char c;

	number = x / 16;
	if (number && count < 1)
		print_hex_less(number, buffer, count + 1);
	if (x % 16 < 10)
		c = x % 16 + 48;
	else
		c = (x % 16) % 10 + 65;
	addto_buff(buffer, c);
}

/**
 * print_hex_ptr - push a pointer in the right format to the buffer
 * @address: the address to be outputed
 * @buffer: printf memory buffer
 * Return: nothing
 */
void print_hex_ptr(uintptr_t address, char *buffer)
{
	uintptr_t ptr;
	char c;

	ptr = address / 16;
	if (ptr)
		print_hex_ptr(ptr, buffer);
	if (address % 16 < 10)
		c = address % 16 + 48;
	else
		c = (address % 16) % 10 + 97;
	addto_buff(buffer, c);
}
