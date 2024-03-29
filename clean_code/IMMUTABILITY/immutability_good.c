#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
    int x;
    int y;
}              t_point;

t_point move_point(const t_point point, const int delta_x, const int delta_y)
{
    return (t_point){ .x = point.x + delta_x, .y = point.y + delta_y };
}

int main(void)
{
    const t_point point = {0, 0};
    const t_point new_point = move_point(point, 2, 3);
    
    printf("New Coordinates: (%d, %d)\n", new_point.x, new_point.y);
    return (EXIT_SUCCESS);
}
