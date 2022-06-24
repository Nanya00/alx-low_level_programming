#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of a program, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Succes)
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
