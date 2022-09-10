#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase and uppercase alphabets
 *
 * Return: Always 0 (if successful)
 *
 */
int main(void)
{
	int small_alph;

	int big_alph;

	for (small_alph = 'a'; small_alph <= 'z'; small_alph++)
		putchar(small_alph);
	for (big_alph = 'A'; big_alph <= 'Z'; big_alph++)
		putchar(big_alph);
	putchar('\n');
	return (0);
}
