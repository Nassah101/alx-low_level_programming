#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - function that prints a dog. that is, its name, age, and owner
* @d: contains a struct holding various variables
* Return: Nothing
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: ");
if (d->name == NULL)
printf("(nil)\n");
else
printf("%s\n", d->name);
printf("Age: %f\n", d->age);
printf("owner: ");
if (d->owner == NULL)
printf("(nil)\n");
else
printf("%s\n", d->owner);
}
}
