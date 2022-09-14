#include "main.h"
/**
 * print_last_digit - function name
 *
 * Description: prints the last digit of any integer argument fed it
 *
 * @n: the parameter holds the argument to be returned
 *
 * Return: last digit of n (if successful)
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return ((n % 10));
}
