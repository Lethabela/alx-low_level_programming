#include "main.h"
/**
 * main -Entry point
 * Description: print alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	return (0);
}
