#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of long: %ld byte(s)\n", sizeof(longType));
	printf("Size of long long: %ld byte(s)\n", sizeof(longlongType));
	printf("Size of float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
