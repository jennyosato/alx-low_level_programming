#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
		putchar(za);
	putchar('\n');
	return (0);
}
