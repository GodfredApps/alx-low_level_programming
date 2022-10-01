#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - checks if string is a number
 * @s: string
 *
 * Return: On success 1.
 * If not a number, 0 is returned.
 */

int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			check = 0;
			break;
		}

	}
	return (check);
}

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char **argv)
{
	int j, ex, coins, cents, d;
	int c[5] = {25, 10, 5, 2, 1};

	ex = 1, j = 0, coins = 0;

	if (argc == 2)
	{
		if (_isnumber(argv[1]))
		{
			while (cents != 0)
			{
				d = cents / c[j];
				if (d == 0)
				{
					j++;
				}
				else
				{
					coins += d;
					cents -= (d * c[j]);
				}
			}
		}
	}
	if (ex == 0)
		printf("%i\n", coins);
	else
		printf("%s\n", "Error");
	return (ex);
}

