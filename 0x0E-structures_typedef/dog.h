#ifndef DOG
#define DOG

/**
 * struct dog: a dogs basic information
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return 0: success
 * struct - defining a dog with a name, age , owner with values
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);

#endif
