#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
*struct dog - dog information
*@name: dog
*@age: dog
*@owner: dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
typedef struct dog og_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
