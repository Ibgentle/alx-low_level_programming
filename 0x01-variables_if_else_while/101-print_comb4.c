#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all unique combos of 3 digit numbers
 *
 * Return: 0 (if successful)
 *
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1; num2 < 9; num2++)
		{
			for (num3 = num2; num3 < 10; num3++)
			{
				if (num1 >= num2)
					continue;
				if (num1 >= num3)
					continue;
				if (num2 >= num3)
					continue;
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');
				if (num1 == 7 && num2 == 8 && num3 == 9)
				break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
