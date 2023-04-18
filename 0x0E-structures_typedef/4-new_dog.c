#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Gets  length of a string
 * @s: String to count
 *
 * Return:  length string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
		s++;
	return (len);
}

/**
 * _strcpy - Copy a string and return dest
 *
 * @dest: Destination value and copy string here
 * @src: Source value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
/**
 * new_dog - ...
 * @name: name of dog
 * @age: age of dog
 * @owner: owner dog
 *
 * Return: struct pointer dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
