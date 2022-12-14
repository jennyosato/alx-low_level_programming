#include "main.h"

/**
 * print_times_table - print times table
 * @n: int
 * Return: void
 */
void print_times_table(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		int j;

		for (j = 0; j <= n; j++)
		{
			int k = i * j;

			if (j != n)
			{
				_putchar(k);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(k);
			}
		}
		_putchar('\n');
	}
}
