/*
* Created by AIS3N
*/

#include "../main.h"
#include "move2.h"
#include <stdlib.h>

void    move_left1(struct s_room* s_room1, int i, int j)
{
    if (s_room1->map[i][j - 1] != 'X' && s_room1->map[i][j - 1] != 'H'
        && s_room1->map[i][j - 1] != 'x')
    {
        s_room1->map[i][j] = ' ';
        s_room1->map[i][j - 1] = 'i';
    }
}

void    move_left2(struct s_room* s_room1, int i, int j)
{
    if (s_room1->map[i][j - 1] != 'X' && s_room1->map[i][j - 1] != 'x')
    {
        if (s_room1->map[i][j - 1] == 'H')
            s_room1->map[i][j - 2] = '_';
        else
            s_room1->map[i][j - 1] = '_';
        s_room1->map[i][j] = ' ';
    }
}

void    move_left(struct s_room* s_room1)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (i < s_room1->height)
    {
        j = 0;
        while (j < my_strlen(s_room1->map[i]))
        {
            if (s_room1->map[i][j] == 'i' && j > 1)
                move_left1(s_room1, i, j);
            else if (s_room1->map[i][j] == '_' && j > 1)
                move_left2(s_room1, i , j);
            j++;
        }
        i++;
    }
    display_map(s_room1);
}
