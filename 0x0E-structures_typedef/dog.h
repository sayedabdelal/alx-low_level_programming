#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a  Dog attributes
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner:  owner of the dog.
 *
 * Description: dog struct in big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
