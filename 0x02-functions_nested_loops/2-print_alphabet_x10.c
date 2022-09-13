#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabet
 *
 * Description: this prints the alphabet 10 times, followed by a new line.
 *
 * Return: null
 *
 */
void print_alphabet_x10(void)
{
	char alph;
	int lines;

	lines = 0;


	while (lines <= 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);

		_putchar('\n');
		lines++;
	}
	return;

}
