/**
 * swap_int - function to swao two integers
 *
 * @a: first integer parameter
 * @b: second integer parameter
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

