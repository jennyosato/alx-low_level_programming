#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int
 * @b: int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
