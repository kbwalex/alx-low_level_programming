#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * description: finds checksum value from objdump
 *
 * Return: 0
 */

int main(void)
{
	int counter, sum, random;

	char numAndLet[80] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	sum = 0;
	counter = 0;
	random = 0;

	char password[80];

	srand(time(NULL));
	sum = 0;
	counter = 0;

	while (sum < (2772 - 122))
	while (sum < 2772)
	{
		random = rand() % 62;
		password[counter] = numAndLet[random];
		sum += password[counter];
		counter++;

		if (2772 - sum < 48)
	{
		sum -= password[--counter];
	}
		else if (2772 - sum <= 126)
		{
			random = 2772 - sum;
		}
		else
		{
			random = rand() % (126 - 48) + 48;
		}

		if (random)
		{
			password[counter++] = random;
			sum += random;
		}
		random = 0;
	}

	random = 2772 - sum;
	password[counter] = random;
	password[counter] = '\0';
	printf("%s\n", password);

	return (0);
}
