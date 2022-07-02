#include <stdio.h>

/**
 * main - print alphabet in lower case and upper case
 * Return: 0 success
 */

int main(void)

{
	char z;

	for (z = 'a'; z <= 'z'; z++)
		putchar(z);
	for (z = 'A'; z <= 'Z'; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
