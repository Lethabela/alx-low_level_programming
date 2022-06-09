#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check for alphabetic character
 * @c : int c function
 *
 * Description: return required results
 *
 * Return: intger value
 */
int _isalpha(int c)
{
	int i;

	i = isalpha(c);

	if (i != 0)
	{
		return (1);
	}
	if (i == 0)
	{
		return (0);
	}
	return (0);
}
