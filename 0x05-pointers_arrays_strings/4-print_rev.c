#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: argument
 * Description: return results
 * Return: return void
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
