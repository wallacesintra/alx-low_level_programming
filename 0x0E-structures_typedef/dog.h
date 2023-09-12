#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef(alias) for struct dog
 */
typedef struct dog dog_t;

/**
 *struct dog- structure of a dog.
 *@name: name of the dog.
 *@age: age of the dog.
 *@owner: owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
