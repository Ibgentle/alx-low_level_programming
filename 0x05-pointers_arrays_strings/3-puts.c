#include "main.h"
/**
 * _puts - prints a string and newline
 *
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str++)
		_putchar(*str++);
	_putchar('\n');
}

