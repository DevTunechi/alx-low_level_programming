#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Defines a new type struct
  * @name: Dog name is Poppy
  * @age: Dog is # years 5 months old
  * @owner:  Woof
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
