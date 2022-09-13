#include "main.h"
/**
 * _isalpha - checks the argument type
 *
 * Description: prints 1 if input is alphabet and 0 otherwise
 *
 * @c: parameter holding argument to be checked
 *
 * Return: 0 or 1 (on successful execution)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
