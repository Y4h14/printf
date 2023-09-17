#include "main.h"
/**
 * hex_count - counts hex numbers printed
 * @n: an usinged int
 * Return: number of printed numeric charecters
 */
int hex_count(unsigned int n)
{
	unsigned int i = 0, number;

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

	number = n;
	while (number)
	{
		i++;
		number /= 10;
	}
	return (i);
}

