#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 * Return: 0 success
 */

int main(void)
{
	int x;
	char z;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}

