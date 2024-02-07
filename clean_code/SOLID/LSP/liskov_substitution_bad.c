#include <stdio.h>
#include <stdlib.h>

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

    light.operate(light.type);
    fan.operate(fan.type);

    return (EXIT_SUCCESS);
}
