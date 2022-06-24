#include "main.h"

/**
 * _strlen - length of a string
 * @s: The string to get the length of
 *
 * Return: The length of @s
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
