#include "main.h"
/**
 * print_shortx - prints a short int in hex lowercase
 * @n: the number to print
 * @buffer: the buffer to append
 * Return: (void)
 */
void print_shortx(uint16_t n, char *buffer)
{
	uint16_t number;
	char c;

	number = n / 16;
	if (number)
		print_shortx(number, buffer);
	if (n % 16 < 10)
		c = n % 16 + 48;
	else
		c = ((n % 16) % 10) + 'a';
	addto_buff(buffer, c);
}
/**
 * print_shortX - prints a short int in hex uppercase
 * @n: the number to print
 * @buffer: the buffer to append
 * Return: (void)
 */
void print_shortX(uint16_t n, char *buffer)
{
	uint16_t number;
	char c;

	number = n / 16;
	if (number)
		print_shortX(number, buffer);
	if (n % 16 < 10)
		c = n % 16 + 48;
	else
		c = ((n % 16) % 10) + 'A';
	addto_buff(buffer, c);
}
