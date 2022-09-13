#include "main.h"
/**
 * print_alphabet writes the alphabet to the stdout
 *
 * Description: this prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: null
 *
 */
void print_alphabet()
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return;

}
