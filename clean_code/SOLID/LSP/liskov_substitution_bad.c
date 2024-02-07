#include <stdio.h>
#include <stdlib.h>

// "Extends the Open/Closed principle"

// "Any object of a class must be substitutable for its parent from which it inherits"

enum e_device_type
{
    LIGHT,
    FAN
};

typedef void (*t_operation)(const enum e_device_type type);

typedef struct s_device
{
    enum e_device_type  type;
    t_operation         operate;
}               t_device;

void operateDevice(const enum e_device_type type)
{
    if (type == LIGHT)
    {
        printf("Light is on\n");
    }
    else if (type == FAN)
    {
        printf("Fan is on\n");
    }
}

int main(void)
{
    const t_device light = {LIGHT, operateDevice};
    const t_device fan = {FAN, operateDevice};

    // Need to know device type to use correctly function.
    // No substitution possible

    light.operate(light.type);
    fan.operate(fan.type);

    return (EXIT_SUCCESS);
}
