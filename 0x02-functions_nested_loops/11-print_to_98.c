#include <stdio.h>
/**
 * print_to_98 - print up or down to 98
 *
 * @n: the number to start printing from
 *
 * Return: void (resturns nothing on success)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

}
