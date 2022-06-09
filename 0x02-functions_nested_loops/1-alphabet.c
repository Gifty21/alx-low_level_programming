#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: Always 0
 */

int print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

	return(0);
}
