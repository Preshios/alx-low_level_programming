#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */
void print_most_numbers(void)
{
	char C;

	for (C = '0'; C <= '9'; C++)
	{
		if (!(C == '2' || C == '4'))
			_putchar(C);
	}
	_putchar('\n');
}
