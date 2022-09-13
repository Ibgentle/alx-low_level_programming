#include "main.h"
/**
 * _islower - checks the case
 *
 * Description: prints 1 if alphabet lowercase and 0 otherwise
 *
 * @c: the char type argument function takes
 *
 * Return: 0 (if successful)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		_putchar((1 % 10) + '0');
	else
		_putchar((0 % 10) + '0');
	return (0);

}
