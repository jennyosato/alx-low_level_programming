#include "main.h"

/**
 * rev_string - returns reversed string
 * @s: char
 */
void rev_string(char *s)
{
	int i;
	int x = 0;
	char str_rev = s[0];

	while (s[x] != '\0')
		x++;
	for (i = 0; i < x; i++)
	{
		x--;
		str_rev = s[i];
		s[i] = s[x];
		s[x] = str_rev;
	}
}
