#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a type of variable with dog information inside
 *
 * @name: the name of the dog is a member of type struct dog
 * @owner: owner of the dog is a member of type struct dog
 * @age: age of the dog is a member of type struct dog
 *
 */

struct dog
{
	char *name;
	char *owner;
	float age;
}
;
/**
 * dog_t - new name of type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *string);
char *_strcpy(char *dest, char *src);


#endif
