#include <stdio.h>
/**
 * main-print out sizes of data types in c
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int x;
	long int y;
	long long int z;
	float f;

	printf("Size of a char: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu bytes(S)\n", (unsigned long)sizeof(x));
	printf("Size of long int: %lu bytes(S)\n", (unsigned long)sizeof(y));
	printf("Size of long long int: %lu bytes(S)\n", (unsigned long)sizeof(z));
	printf("Size of float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}
