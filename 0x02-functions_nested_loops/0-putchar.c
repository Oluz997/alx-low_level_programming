#include "main.h"
/**
 * main-print Holberton as a message
 *
 * Return: 0
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, zs;

	zs = sizeof(str) / sizeof(int);
	for (count = 0; count < zs; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
