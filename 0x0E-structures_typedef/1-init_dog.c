#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* init_dog - function that initialize a variable of type struct dog
* @d: pointer to struct dog
* @name: pointer to name of the dog
* @age: pointer to the age of the dog
* @owner: pointer to the owner of the dog
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
