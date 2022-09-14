#include "main.h"
/**
 * _abs - checks the sign of the argument
 *
 * Description: removes the sign of the int argument and prints the int value
 *
 * @n: the parameter holds the argument to be returned
 *
 * Return: 0, 1 or -1 (and 0 at the end)
 */
int _abs(int n)
{
	int abs_val;

	if (n >= 0)
		return (n);
	else if (n < 0)
	{
		abs_val = n - (n * 2);
		return (abs_val);
	}
	return (0);
}
