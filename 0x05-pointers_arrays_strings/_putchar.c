#include <unistd.h>
/**
 * _putchar - write char c
 * @c: character
 * Return : Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
