#ifndef MAIN_H
#define MAIN_H

/*
 * File: dog.h
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - new type define for dog with elements
 * @name: The name of the dog
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* MAIN_H */
