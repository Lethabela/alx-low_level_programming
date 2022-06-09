#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Description: print_alphabet_x10
 *
 * Return: return is void
 */
void print_alphabet_x10(void)
{
	int times;
	char ch;

	for (times = 0; times < 10; times++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
	_putchar('\n');
	}
}
