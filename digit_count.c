#include "main.h"
/**
 * digit_count - prints a number using write
 * @n: the number to print
 * Return: the amount of digits printed
 */
int digit_count(int n)
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
