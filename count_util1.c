#include "main.h"
/**
 * hex_count - counts hex numbers printed
 * @n: an usinged int
 * Return: number of printed numeric charecters
 */
int hex_count(unsigned int n)
{
	unsigned int i = 0, number;

	if (n == 0)
		return (1);
	number = n;
	while (number)
	{
		i++;
		number /= 16;
	}
	return (i);
}

/**
 * oct_count - count oct numbers printed
 * @n: an unsigned int
 * Return: number of printed numeric charecters
 */
int oct_count(unsigned int n)
{
	unsigned int i = 0, number;

	if (n == 0)
		return (1);
	number = n;
	while (number)
	{
		i++;
		number /= 8;

	}
	return (i);
}
/**
 * uns_count - count unsigned int
 * @n: an unsigned int
 * Return: number of printed numeric charecters
 */
int uns_count(unsigned int n)
{
	int i = 0;
	unsigned int number;

	if (n == 0)
		return (1);
	number = n;
	while (number)
	{
		i++;
		number /= 10;
	}
	return (i);
}
/**
 * binary_count - counts the 0s and 1s outputed to stdout
 * @n: unsigned integer to be converted to binary
 * Return: the number of digits outputed
 */
int binary_count(unsigned int n)
{
	int i = 0;
	unsigned int number;

	if (n == 0)
		return (1);
	number = n;
	while (number)
	{
		i++;
		number /= 2;
	}
	return (i);
}
/**
 * decimal_count - counts the digits printed to stdout
 * @n: the integer operated on
 * Return: the number of digits outputed
 */
int decimal_count(int n)
{
	unsigned int number, i = 0, if_neg = 0;

	if (n < 0)
	{
		n = n * (-1);
		if_neg = 1;

	}
	number = n;
	while (number)
	{
		number = number / 10;
		i++;
	}
	if (if_neg || i == 0)
		return (i + 1);
	else
		return (i);
}

