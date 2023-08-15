#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
* _strlen - check the length of a string
* @s: string to check
* Return: the length of a string *s
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
* _strcpy - copies a string pointed by src to the string dest
* @dest: string to copy src into
* @src: string to copy
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
* new_dog - create a new dog from struct dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: the struct of new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;
	int len_1, len_2;

	len_1 = _strlen(name);
	len_2 = _strlen(owner);

	the_dog = malloc(sizeof(dog_t));

	if (the_dog == NULL)
		return (NULL);

	the_dog->name = malloc(sizeof(char) * (len_1 + 1));

	if (the_dog->name == NULL)
	{
		free(the_dog);
		return (NULL);
	}

	the_dog->owner = malloc(sizeof(char) * (len_2 + 1));

	if (the_dog->owner == NULL)
	{
		free(the_dog);
		free(the_dog->name);
		return (NULL);
	}

	_strcpy(the_dog->name, name);
	_strcpy(the_dog->owner, owner);
	the_dog->age = age;

	return (the_dog);
}
