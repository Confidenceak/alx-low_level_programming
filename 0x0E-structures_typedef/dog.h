#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure data type dog
 * @name: the name to be declared
 * @age: the declared age
 * @owner: the declared owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
