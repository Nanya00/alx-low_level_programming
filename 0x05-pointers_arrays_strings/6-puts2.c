#include "main.h"

/**
 * puts2 - Prints one char out of two of a string
 * @str: The string containing characters
 */
void puts2(char *str)
{
	int i = 0, length = 0;

	while (str[i])
		length++;

	for (i = 0; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
