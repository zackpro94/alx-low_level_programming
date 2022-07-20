#include "main.h"

/**
 * _pow_recursion - returns the value of x raided to the power of x
 * @x: value of raisse
 * @y: power
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
