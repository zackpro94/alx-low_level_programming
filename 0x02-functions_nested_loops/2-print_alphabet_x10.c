#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	char z;
	int i;

	i = 0;
	while (i < 10)
	{
		z = ''a';
		while (z <= 'z')
		{
			_putchar(z);
			z++;
		}
		_putchar('\n');
		i++;
	}
}
