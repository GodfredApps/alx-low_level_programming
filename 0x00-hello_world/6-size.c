#include <stdio.h>
/**
 * main- Entry point
 * Return: always returns 0
 */

int main(void)
{
	int i;
	double d;
	char c;
	long int b;
	long long int e;
	float f;

	printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of an duoble is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of an char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an long is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of an 2xlong is: %lu byte(s)\n", (unsigned long) sizeof(e));
	printf("The size of an float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

