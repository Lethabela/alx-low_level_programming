#include "main.h"
/**
 * swap_int - swap argument
 * @a: first argument
 * @b: second argument
 * Description: return results
 * Return: return void
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
