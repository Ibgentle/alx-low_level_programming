#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print lowercase alphabets reversed
 *
 * Return: 0 (if successful)
 *
 */
int main(void)
{
	int lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
