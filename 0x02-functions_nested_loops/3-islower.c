#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to checked
 * Return: 1 is char is lowercase, otherwise 0.
 */

int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
