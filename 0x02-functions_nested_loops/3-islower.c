#include "main.h"

/**
 * _islower - return i if char is lower and 0 otherwise
 * @c: character
 * Return: 1 if lower and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
