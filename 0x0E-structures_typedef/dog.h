#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a struct data type
 * @name: name of the doog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Description: this struct contains info about dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*_DOG_H_*/
