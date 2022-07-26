#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of the arguments passed to the program
 * @argc: number of the arguments
 * @argv: array of the arguments
 * Return: always 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
