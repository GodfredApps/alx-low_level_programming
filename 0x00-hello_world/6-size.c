#include <stdio.h>
/**
<<<<<<< HEAD
 * main- entry point
 * Return: always returns 0
 *
=======
 * main- Entry point
 * Return: always returns 0
>>>>>>> ef0bc40c51ac2ed6cc0da37c3827fc9dc075b133
 */

int main(void)
{
	int i;
	double d;
	char c;
<<<<<<< HEAD
	long int b;
	long long int e;
	float f;

	printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of an duoble is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of an char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an long is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of an 2xlong is: %lu byte(s)\n", (unsigned long) sizeof(e));
	printf("The size of an float is: %lu byte(s)\n", (unsigned long)sizeof(f));
=======

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an duoble is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of an c is: %lu.\n", (unsigned long)sizeof(c));
>>>>>>> ef0bc40c51ac2ed6cc0da37c3827fc9dc075b133
	return (0);
}

