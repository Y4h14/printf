#include "main.h"
/**
 * binary_count - counts the 1 and 0 printed to the screen
 * @n: unsigned integer to convert to binary and print
 * Return: number of characters outputed
 */
int binary_count(unsigned int n)
{
	unsigned int i = 0, number;

	if (n == 0)
		return (1);
	number = n;
	while (number)
	{
		number = number / 2;
		i++;
	}
	return (i);
}

