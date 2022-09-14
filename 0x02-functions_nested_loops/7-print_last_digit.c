#include "main.h"
#include <limits.h>
/**
 * print_last_digit - return last digit of number
 *
 * Description: prints the last digit of any integer argument fed it
 *
 * @n: the parameter holds the argument to be returned
 *
 * Return: 0 (if successful)
 */
int print_last_digit(int n)
{
	int abs_n;
	int min_int;
	int a;
	min_int = INT_MIN;

	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else if (n < 0)
	{
		abs_n = n - (n * 2);
		_putchar((abs_n % 10) + '0');
		return (abs_n % 10);
	}
	else if (n == INT_MIN)
	{
		a = -(min_int % 10);
		_putchar(a + '0');
		return (a % 10);
	}
	return (0);
}
