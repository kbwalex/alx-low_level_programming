#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: numbers of lines
 * Return: no return
 */
void print_triangle(int size)
{
	int h, trt;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (trt = n - h; trt > 0; trt--)
				_putchar(' ');

			for (trt = 0; trt < h; trt++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
