#include "main.h"
#include <limits.h>
/**
 * print_last_digit - return last digit of number
 *
 * Description: prints the last digit of any integer argument fed it
 *
 * @n: the parameter holds the argument to be returned
 *
 * Return: value of last digit (if successful)
 */
int print_last_digit(int n)
{
	int last_digit;
	
	last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
