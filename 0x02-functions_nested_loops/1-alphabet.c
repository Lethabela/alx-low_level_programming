#include "main.h"
/**
 * print_alphabet - print lowercase
 *
 * Description: print_alphabet from a to z
 *
 * Return: return is void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
