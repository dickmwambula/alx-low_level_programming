#include <stdio.h>

/**
 * main - Main function
 *
 * Retun :0 (Successful)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
