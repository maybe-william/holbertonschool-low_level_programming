#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a dog struct
 * @name: the name
 * @owner: the owner
 * @age: the age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

int _putchar(char);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
