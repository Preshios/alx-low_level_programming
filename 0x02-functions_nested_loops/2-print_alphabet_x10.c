#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet
 * in lowercase
 */
void print_alphabet_x10(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int n, m;

	for (n = 0; n < 26; n++)
	{
		for (m = 0; m < 10; m++)
		{
			_putchar(alp[n]);
		}
		_putchar('\n');
	}
}
