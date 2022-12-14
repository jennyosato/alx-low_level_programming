#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return: No return
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(i);
		_putchar('\n');
		i++;
	};
}
