#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	char z;

	z = 'a';
	while (z <= 'z')
	{
		_putchar(z);
		z++;
	}
	_putchar('\n');
}
