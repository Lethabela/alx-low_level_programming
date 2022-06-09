#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Description: print results
 *
 * Return: interger
 */
void jack_bauer(void)
{
	int i;
	int c;

	for (i = 0; i < 24; i++)
	{
		for (c = 0; c < 60; c++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar('\n');
		}
	}
}
