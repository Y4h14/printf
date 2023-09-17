#include "main.h"
/**
 * print_binary - prints a binary to the output
 * @n: the number to convert and print in binary
 * Return: (void)
 */
void print_binary(unsigned int n)
{
	unsigned int number;
	char c;

	number = n / 2;
	if (number)
		print_binary(number);
	c = n % 2 + 48;
	write(1, &c, 1);
}

