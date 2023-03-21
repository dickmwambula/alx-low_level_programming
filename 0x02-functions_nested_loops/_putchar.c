#include <stdio.h>
#include <unistd.h>
/**
 * Main - A program the print _putchar
 * 
 * Return: 0 (Seccess)
 */

int _putchar(char c)
{
	return(write(1 ,&c, 1));
}
