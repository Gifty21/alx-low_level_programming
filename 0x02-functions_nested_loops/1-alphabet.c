#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
