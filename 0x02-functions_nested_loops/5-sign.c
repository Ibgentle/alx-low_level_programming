#include "main.h"
/**
 * print_sign - checks the sign of the argument
 *
 * Description: prints + for positive, 0 for zero and -1 for negative arguments
 *
 * @n: parameter holding argument to be checked
 *
 * Return: 0, 1 or -1 (and 0 at the end)
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
