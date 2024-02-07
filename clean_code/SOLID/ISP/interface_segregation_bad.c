#include <stdio.h>
#include <stdlib.h>

typedef void (*t_operation)(void);

typedef struct  s_animal
{
    t_operation walk;
    t_operation fly;
}               t_animal;

void walk(void)
{
    printf("Walking\n");
}

void fly(void)
{
    printf("Flying\n");
}

int main(void)
{
    const t_animal dog = {walk, NULL}; 
    const t_animal bird = {walk, fly}; 

    dog.walk();
    dog.fly(); // Crash or need protection 

    bird.walk();
    bird.fly();

    return (EXIT_SUCCESS);
}