#include "main.h"
/**
 * _strlen - return len of string
 * @s: argument
 * Description: return results
 * Return: integer
 */
int _strlen(char *s)
{
	int count = 0;

		while (*s != '\0')
		{
			count += 1;
			s++;
		}
		return (count);
}
