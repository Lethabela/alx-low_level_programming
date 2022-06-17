#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first arugment
 * @s2: second argument
 *
 * Description: return results
 * Return: interger value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
