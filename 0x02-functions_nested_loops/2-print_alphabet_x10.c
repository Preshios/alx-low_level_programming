#include "main.h"
/**
 * print_alphabet_x10 - Print all alphabet
 * in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char letter;
	int n;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar(letter);
			_putchar('\n');
		}
	}
}
