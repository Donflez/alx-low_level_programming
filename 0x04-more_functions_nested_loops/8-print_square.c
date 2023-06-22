#include "main.h"

/**
 * print_sqare - prints a square of variable length
 * @size: dimensions of square
 */
void print_sguare(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (i = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
