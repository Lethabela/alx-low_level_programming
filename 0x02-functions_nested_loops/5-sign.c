#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: check function
 *
 * Description: print results
 *
 * Return: return intergar
 */
int print_sign(int n)
{
	int i = -1;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('_');
		return (i);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
