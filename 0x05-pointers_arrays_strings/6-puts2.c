#include "main.h"

/**
 * puts2 -  prints a string
 *
 * @str: arg *str
 *
 * Return: string
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\n')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
