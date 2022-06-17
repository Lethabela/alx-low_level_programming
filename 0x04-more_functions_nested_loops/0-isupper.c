#include "main.h"
/**
 * _isupper - check if the argument is upper case
 * @c: argument
 * Return: int
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
