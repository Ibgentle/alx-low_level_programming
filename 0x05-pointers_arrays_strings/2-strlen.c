/**
 * _strlen - function to mcheck string length
 *
 * @s: the string whose length is returned
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
		length++;
	return (length);
}

