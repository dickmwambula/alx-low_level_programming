#include "main.h"

/**
 * main - main function
 *
 * description - print all alphabet in lower cases
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar(letter);
	_putchar('\n');
}
