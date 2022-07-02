#include <stdio.h>

/**
 * main - print alphabet in lower case except e and q
 * Return: 0 success
 */

int main(void)

{
	char z = 'a';

	while (z <= 'z')
	{
		if (z != 'e' && z != 'q')
		{
			putchar(z);
		}
		z++;
	}
	putchar('\n');
	return (0);
{
