#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: First string to be concatenated to dest
 * @dest: Second string to be concatenated to src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x, i;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[x] = src[i];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
