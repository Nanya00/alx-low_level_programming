#include "main.h"

/**
 * _strncat - Concatenates two strings using n bytes from src
 * @dest: String to be concatenated
 * @src: String to be concatenated to dest
 * @n: number of bytes that will be used from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, i;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (i = 0; src[i] != '\0' && n > 0; i++, n--, x++)
	{
		dest[x] = src[i];
	}
	return (dest);
}
