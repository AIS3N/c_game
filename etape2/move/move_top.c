/*
* Created by AIS3N
*/

#include "../main.h"
#include "move2.h"
#include <stdlib.h>

void    move_top1(struct s_room* s_room1, int i, int j)
{
    if (s_room1->map[i - 1][j] != 'X' && s_room1->map[i - 1][j] != 'H'
        && s_room1->map[i - 1][j] != 'x' && s_room1->map[i - 1][j] != 'K')
    {
        s_room1->map[i][j] = ' ';
        s_room1->map[i - 1][j] = 'i';
    }
}

void    move_top2(struct s_room* s_room1, int i, int j)
{
    if (s_room1->map[i - 1][j] != 'X' && s_room1->map[i - 1][j] != 'x' && s_room1->map[i - 1][j] != 'K')
    {
        if (s_room1->map[i - 1][j] == 'H')
            s_room1->map[i - 2][j] = '_';
        else
            s_room1->map[i - 1][j] = '_';
        s_room1->map[i][j] = ' ';
    }
}

void    move_top(struct s_room* s_room1)
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
            if (s_room1->map[i][j] == 'i' && i > 0)
                move_top1(s_room1, i, j);
            else if (s_room1->map[i][j] == '_' && i > 0)
                move_top2(s_room1, i, j);
            j++;
        }
        i++;
    }
    if (s_room1->key == 0)
        s_room1->map[4][24] = 'K';
    display_map(s_room1);
}
