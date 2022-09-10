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
	int new_num;

	for (number = 0; number < 10; number++)
	{
		new_num = (char)number;
		putchar(new_num);
	}

	putchar('\n');
	return (0);
}
