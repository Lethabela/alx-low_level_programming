#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: int number
 * return: if no natural square root, return -1, Else return natura root
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

	int sq = 1;

	return (sqrt_fun(n, sq));
}

/**
 * sqrt_fun - helper function to solve _sqrt_recursion
 * @sq: number to determine ifsqare root
 * @n: int number
 * Return: square root if natural square root, or -1 if none found
 */

int sqrt_fun(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
