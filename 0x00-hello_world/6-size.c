#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int i;
	long j;
	long long k;
	float l;

        printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(j));
	printf("size of a long long int: %lu byte(s)\n", sizeof(k));
	printf("size of a float: %lu byte(s)\n", sizeof(l));

	return (0);
}
