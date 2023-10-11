#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - a new type describing a dog
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner
  */
struct dog
{
	char *name;
	int age;
	char *owner
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*_DOG_H_*/
