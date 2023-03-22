#include  "main.h"

/**
 * _isalpha - check for apphabet character
 * @c: The character to be checked
 * Return: 1 for alphabet character or 0 for anyrhing elses
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
