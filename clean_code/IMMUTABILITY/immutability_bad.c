#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
    int x;
    int y;
}              t_point;

void move_point(t_point *point, const int delta_x, const int delta_y)
{
    point->x += delta_x;
    point->y += delta_y;
}

int main(void)
{
    t_point point = {0, 0};

    move_point(&point, 2, 3);
    printf("New Coordinates: (%d, %d)\n", point.x, point.y);
    return (EXIT_SUCCESS);
}
