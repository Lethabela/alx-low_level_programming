#include "main.h"
/**
 * _puts - print string
 * @str: argument 
 * Description: return results
 * Return: return void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
