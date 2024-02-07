#include <stdio.h>
#include <stdlib.h>

static double sum_recursive(const double *arr, const int start, const size_t end)
{
    if (start == end)
        return (arr[start]);
    else
        return (arr[start] + sum_recursive(arr, start + 1, end));
}

double average(const double *arr, const size_t length)
{
    const double totalSum = sumRecursive(arr, 0, length - 1);
    return (totalSum / length);
}

int main(void)
{
    const double numbers[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    const size_t length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Average: %f\n", average(numbers, length));
    return (EXIT_SUCCESS);
}
