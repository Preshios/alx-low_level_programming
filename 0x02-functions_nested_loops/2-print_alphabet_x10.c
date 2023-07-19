#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet
 * in lowercase
 */
void print_alphabet_x10(void)
{
	char letter;
	int n;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (n = 0; n < 26; n++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
