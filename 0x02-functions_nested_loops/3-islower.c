#include "main.h"
/**
 * _islower - checks the case
 *
 * Description: prints 1 if alphabet lowercase and 0 otherwise
 *
 * @c: the char type argument function takes
 *
 * Return: 0 or 1 (on successful execution)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
