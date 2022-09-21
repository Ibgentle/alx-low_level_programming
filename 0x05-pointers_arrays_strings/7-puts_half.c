#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string whose half is to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int index = 0;
	int n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}

