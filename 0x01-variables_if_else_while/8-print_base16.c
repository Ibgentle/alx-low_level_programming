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

	for (base_16 = 0; base_16 < 16; base_16++)
		putchar((number % 10) + '0');
	for (alph_b16 = 'a'; alph_b16 <= 'f'; alph_b16++)
		putchar(alph_b16);
	putchar('\n');

	return (0);
}

