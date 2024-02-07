#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#define NB_ITERATION 100000

char *ft_strstr_good(const char *haystack, const char *needle);
char *ft_strstr_old(const char *haystack, const char *needle);
char *ft_strstr_opti(const char *haystack, const char *needle);
char *ft_strstr_bad(const char *haystack, const char *needle);

void benchmark(char *(*strstr_func)(const char *, const char *), const char *haystack, const char *needle, const char *name)
{
    clock_t start_time;
    clock_t end_time;
    clock_t diff_time;
    int diff;
    double seconds;
    volatile char * volatile dummy; 

    printf("Name\t=\t%s\n", name);
    printf("Result\t=\t%s\n", strstr_func(haystack, needle));
    start_time = clock();
    for (long i = 0; i < NB_ITERATION; i++)
    {
       dummy = strstr_func(haystack, needle);
    }
    diff_time = clock() - start_time;
    printf("Clock\t=\t%lu\n", diff_time);
    printf("Seconds\t=\t%f\n", (double)diff_time / CLOCKS_PER_SEC);
    printf("---------------------------------\n");
}

int main(int ac, char **av)
{
    if (ac > 2)
    {
        benchmark(strstr, av[1], av[2], "Original");
        benchmark(ft_strstr_opti, av[1], av[2], "Opti");
        benchmark(ft_strstr_old, av[1], av[2],"Old");
        benchmark(ft_strstr_good, av[1], av[2], "Good");
        benchmark(ft_strstr_bad, av[1], av[2], "Bad");
    }
    return (EXIT_SUCCESS);
}