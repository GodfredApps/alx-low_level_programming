#include <stdio.h>
/**
 * main- Entry point
 * Return: always returns 0
 */

int main(void)
{
	int i;
	char c;
	long int b;
	long long int e;
	float f;

	printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of a long is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of a long long is: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("The size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

