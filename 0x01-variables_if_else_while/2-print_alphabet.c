#include <stdio.h>
/**
 * main - Entry point
 * Description: this program prints lowercase alphabets
 *
 * Return: Always 0 (if successful)
 *
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
