#include "main.h"
/**
 * print_sign - checks the sign of the argument
 *
 * Description: prints + for positive, 0 for zero and -1 for negative arguments
 *
 * @c: parameter holding argument to be checked
 *
 * Return: 0, 1 or -1 (if successful)
 */
int print_sign(int c)
{
	if (c >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}

}
