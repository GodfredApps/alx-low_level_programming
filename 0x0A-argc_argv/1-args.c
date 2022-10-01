#include <stdio.h>

/**
 * main - entry point to print number of arguemnets passed
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: Always success
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	
	printf("Total = %i\n", argc - 1);
	return (0);
}

