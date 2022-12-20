#include "main.h"

/**
* _atoi - function that convert a string to an integer.
* @s: pointer to character string
*
* Return: integer
*/

int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temt = s;
	num = 0;
	sign = l;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -l;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
