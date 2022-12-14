#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combos of two single-digit numbers
 *
 * Return: 0 (if successful)
 *
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1; num2 < 10; num2++)
		{
			if (num1 >= num2)
				continue;
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 == 8 && num2 == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
