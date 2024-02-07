#include <stdio.h>
#include <stdlib.h>

// Keep It Simple, Stupid

double average(const double *arr, const size_t length)
{
    size_t i;
    double sum;

    i = 0;
    sum = 0.0;
    while (i < length)
    {
        sum += arr[i];
        ++i;
    }
    return (sum / length);
}

int main(void)
{
    const double numbers[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Average: %f\n", average(numbers, length));
    return (EXIT_SUCCESS);
}
