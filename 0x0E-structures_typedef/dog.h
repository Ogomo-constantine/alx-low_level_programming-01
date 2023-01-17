#ifndef STRTYP
#define STRTYP

/**
 * struct dog - structure of a dog.
 * @name: pop
 * @age: two months
 * @owner: joanna
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *p, char *name, float age, char *owner);
void print_dog(struct dog *p);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *p);

#endif /* STRTYP */
