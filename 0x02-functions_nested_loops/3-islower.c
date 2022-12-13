#include "main.h"

/**
 * _islower - check if a char is lowercase
 *
 * Return: Always 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
