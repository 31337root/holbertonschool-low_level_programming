#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - new type with elements.
 * Description: Will store the name, age and owner of the dog.
 * @name: Member 1.
 * @age: Member 2.
 * @owner: Member 3.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
