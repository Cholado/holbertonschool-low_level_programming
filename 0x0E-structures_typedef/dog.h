#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - data structure for dog's info
 * @name: Dog name, first member
 * @age: Dog ege, second member
 * @owner: Dog owner, third member
 * Description: struct that has the basic information about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */
