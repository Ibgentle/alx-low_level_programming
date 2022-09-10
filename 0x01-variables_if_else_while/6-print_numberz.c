#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:this program prints single-digit base ten numbers using putchar
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number / 100) + 'number');

	putchar('\n');
	return (0);
}
