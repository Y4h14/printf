#include "main.h"
/**
 * spy_cmp - check if a charecter is special
 * @s1: a charecter
 * Return: 1 if the charecter is special
 */
int spy_cmp(char s1)
{
	int i = 0;

	char str[] = "disc%";

	while (i < 5)
	{
		if (str[i] == s1)
			return (1);

		i++;
	}
	return (0);
}
