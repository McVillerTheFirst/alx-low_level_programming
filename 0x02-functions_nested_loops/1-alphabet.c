#include "main.h"

/**
 * print_alphabet - Make the alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_puntchar(c);
	}
	_puntchar('\n');
}
