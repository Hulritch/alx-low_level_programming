#ifndef DOG_H
#define DOG_H

struct dog
{
char name;
float age;
char owner;
};

int main()
{
struct dog my_dog;

my_dog.name = "bobby";
my_dog.age = 45;
my_dog.owner = "booty";
return (0);
}


char _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
