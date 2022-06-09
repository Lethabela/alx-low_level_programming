#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer input
 * Description: print required results
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n == 98)
				break;
			printf("%c", ',');
			printf("%c", ' ');
			n++;
		}
		printf("%c", '\n');
	}
	else
	{
		int b = n;

		while (b >= 98)
		{
			printf("%d", b);
			if (b == 98)
				break;
			printf("%c", ',');
			printf("%c", ' ');
			b--;
		}
		printf("%c", '\n');
	}
}
