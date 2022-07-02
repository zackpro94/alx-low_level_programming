#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 * Return: 0 success
 */

int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
