#include <stdio.h>

/**
 * main- Entry point, prints alphabets
 *
 * Return: Always (Success)
 */

int main(void)
(
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}

