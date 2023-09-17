#include "main.h"
/**
 * print_decimal - prints am integer using _putchar
 * @n: the number to be printed
 * Return: void
 */
void print_decimal(int n)
{
	unsigned int number;
	char curr_char;

	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}

	number = n / 10;
	if (number)
		print_decimal(number);
	curr_char = n % 10 + 48;
	write(1, &curr_char, 1);
}

