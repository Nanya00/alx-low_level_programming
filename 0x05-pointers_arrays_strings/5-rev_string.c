#include "main.h"

/**
 * rev_string - Prints a reverse string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	char *start_c, *end_c, c;
	int x, count;
	int length = 0;

	for (x = 0; s[x]; x++)
	{
		length++;
	}

	count = length;

	start_c = s;
	end_c = s;

	for (x = 0; x < count - 1; x++)
	{
		end_c++;
	}

	for (x = 0; x < count / 2; x++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}
}
