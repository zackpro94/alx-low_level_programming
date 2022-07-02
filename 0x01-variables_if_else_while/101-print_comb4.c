#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 success
 */

int main(void)
{
	int n, m, z;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (z = 50; z < 58; z++)
			{
				if (z > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(z);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
