#include "main.h"

/**
 * * print_diagonal - Draws a diagonal line using the \ character
 * @n: The number of \ characters to be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
