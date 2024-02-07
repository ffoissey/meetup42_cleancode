#include <stdbool.h>
#include <stdlib.h>

enum e_process_type
{
    NONE,
    BASIC,
    ADVANCED
};

void process(const int data, enum e_process_type process_type)
{
    if (process_type == BASIC)
    {
        // Basic data process
    }
    else if (process_type == ADVANCED)
    {
        // Advanced data process
    }
}

int main(void)
{
    process(42, ADVANCED);
    return (EXIT_SUCCESS);
}