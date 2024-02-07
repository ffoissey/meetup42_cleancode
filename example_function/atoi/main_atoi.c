#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define NB_ITERATION 100000

int ft_atoi_good(const char *str);
int	ft_atoi_old(const char *str);
int	ft_atoi_opti(const char *str);
int	ft_atoi_bad(const char *str);


void benchmark(int (*atoi_func)(const char *), const char *str, const char *name)
{
    clock_t start_time;
    clock_t end_time;
    clock_t diff_time;
    int diff;
    double seconds;
    volatile int dummy; 

    printf("Name\t=\t%s\n", name);
    printf("Result\t=\t%d\n", atoi_func(str));
    start_time = clock();
    for (long i = 0; i < NB_ITERATION; i++)
    {
       dummy = atoi_func(str);
    }
    diff_time = clock() - start_time;
    printf("Clock\t=\t%lu\n", diff_time);
    printf("Seconds\t=\t%f\n", (double)diff_time / CLOCKS_PER_SEC);
    printf("---------------------------------\n");
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        benchmark(atoi, av[1], "Original");
        benchmark(ft_atoi_opti, av[1], "Opti");
        benchmark(ft_atoi_old, av[1], "Old");
        benchmark(ft_atoi_good, av[1], "Good");
        benchmark(ft_atoi_bad, av[1], "Bad");
    }
    return (EXIT_SUCCESS);
}