#include <stdlib.h>
#include "function_pinters.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pionter ro the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
