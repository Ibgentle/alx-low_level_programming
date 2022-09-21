#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string whose characters are printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0;
	int index = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}

