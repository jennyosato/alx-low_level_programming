#include "main.h"

/**
 * print_alphabet - prints all alpabet in lower case followed by a newline
 * Return: No Return
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
