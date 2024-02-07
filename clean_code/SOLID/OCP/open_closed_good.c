#include <stdlib.h>

// Software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification.

void processBasic(const int data)
{
    // Basic data process
}

void processAdvanced(const int data)
{
    // Advanced data process}
}

void process(const int data, void (*processType)(const int))
{
    processType(data);
}

int main()
{
    process(42, processAdvanced);
    return (EXIT_SUCCESS);
}