#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog with a name, agae and owner's name
* @name: the name of the dog
* @age: the age of the dog
* @owner: the dog's owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - new name for the type struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
