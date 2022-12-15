#include "main.h"

/**
 * print_times_table - print times table
 * @n: int
 * Return: void
 */
void print_times_table(int n)
{
	int num, x, y;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (x = 1; x <= n; x++)
			{
				_putchar(',');
				_putchar(' ');
				y = num * x;

				if (y <= 99)
					_putchar(' ');
				if (y <= 9)
					_putchar(' ');
				if (y >= 100)
				{
					_putchar((y / 100) + '0');
					_putchar((y / 10) % 10 + '0');
				}
				else if (y <= 99 && y >= 10)
				{
					_putchar((y / 10) + '0');
				}
			_putchar((y % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
