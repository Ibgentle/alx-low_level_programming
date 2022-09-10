#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this program prints al base sixteen numbers in lowercase
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int num_b16;
	int alph_b16;

	for (num_b16 = 0; num_b16 < 16; num_b16++)
		putchar((number % 10) + '0');
	for (alph_b16 = 'a'; alph_b16 <= 'f'; alph_b16++)
		putchar(alph_b16);
	putchar('\n');

	return (0);
}

