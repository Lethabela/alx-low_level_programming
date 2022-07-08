#include "main.h"
/**
 * _memset - fills the memory of thearray with n bytes
 * @s: first argument
 *
 * @b: second argument
 * @n: third argument
 *
 * Description: return the required 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}
