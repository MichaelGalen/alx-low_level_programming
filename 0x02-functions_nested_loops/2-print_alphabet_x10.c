#include "main.h"

/**
 * print_alphabeth_x10 - funtion to print abc 10 times
 *
 * Return: 0 success
 */
void print_alphabeth_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
