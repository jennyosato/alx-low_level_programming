#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: int
 * Return: returns last digit of a number
 */
int print_last_digit(int i)
{
	int x = i % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');

	return (0);
}

