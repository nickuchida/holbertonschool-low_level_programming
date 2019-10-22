#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *copy1;
	char *copy2;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	copy1 = malloc(sizeof(char) * _strlen(name));
	copy2 = malloc(sizeof(char) * _strlen(owner));

	my_dog->name = copy1;
	my_dog->age = age;
	my_dog->owner = copy2;
	return (my_dog);
}
