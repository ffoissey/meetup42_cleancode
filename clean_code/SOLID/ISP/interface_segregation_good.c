#include <stdio.h>
#include <stdlib.h>

typedef void (*t_action_function)(void);

typedef t_action_function t_walk_function;
typedef t_action_function t_fly_function;

typedef struct s_bird
{
    t_walk_function walk; 
    t_fly_function fly;
}               t_bird;

typedef struct s_dog
{
    t_walk_function walk; 
}               t_dog;

void walk(void)
{
    printf("Walking\n");
}

void fly(void)
{
    printf("Flying\n");
}

int main(void )
{
    const t_dog dog = {.walk = walk};
    const t_bird bird = {.walk = walk, .fly = fly};

    dog.walk();
    // dog.fly();  Can't compile

    bird.walk();
    bird.fly();

    return (EXIT_SUCCESS);
}
