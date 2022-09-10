#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:this program prints single-digit base ten numbers
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);

	putchar('\n');
	return (0);
}
