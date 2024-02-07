#include <stdio.h>
#include <stdlib.h>

// "Extends the Open/Closed principle"
// "Any object of a class must be substitutable for its parent from which it inherits"

typedef void (*t_operation)(void);

typedef struct  s_device
{
    t_operation operate;
}               t_device;


void turnOnLight()
{
    printf("Light is on\n");
}

void turnOnFan()
{
    printf("Fan is on\n");
}

void operateDevice(const t_device *device)
{
    device->operate();
}

int main(void)
{
    const t_device light = {turnOnLight};
    const t_device fan = {turnOnFan};

    operateDevice(&light);
    operateDevice(&fan);

    return (EXIT_SUCCESS);
}
