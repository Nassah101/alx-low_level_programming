#ifndef DOG_H
#define DOG_H
/**
* struct dog - a simple struct that contains variables
* @name: Holds name of dog in char array
* @age: Holds number, including any decimals
* @owner: Holds name of owner in char array
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
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
