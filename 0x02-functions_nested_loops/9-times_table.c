#include "main.h"

/**
 * times_table - prints the 9times table
 */
void times_table(void)
{
	int num, times, multiply;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (times = 0; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			multiply = num * times;

			if (multiply <= 9)
				_putchar(' ');
			else
				_putchar((multiply / 10) + '0');
			_putchar((multiply % 10) + '0');
		}
		_putchar('\n');
	}
}
