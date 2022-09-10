#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets except q and e
 *
 * Return: Always 0 (if successful)
 *
 */
int main(void)
{
	int small_alph;

	for (small_alph = 'a'; small_alph <= 'z'; small_alph++)
	{
		if (small_alph != 'q' && small_alph != 'e')
			putchar(small_alph);
	}
	putchar('\n');
	return (0);
}
