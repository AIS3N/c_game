/*
* Created by AIS3N
*/

#include "../main.h"
#include "move2.h"
#include <stdlib.h>

void    move_right1(struct s_room* s_room1, int i, int j)
{
    if (s_room1->map[i][j + 1] != 'X' && s_room1->map[i][j + 1] != 'H'
        && s_room1->map[i][j + 1] != 'x')
    {
        s_room1->map[i][j] = ' ';
        s_room1->map[i][j + 1] = 'i';
    }
}

int    move_right2(struct s_room* s_room1, int i, int j)
{
    if (s_room1->map[i][j + 1] != 'X' && s_room1->map[i][j + 1] != 'x')
    {
        if (s_room1->map[i][j + 1] == 'H')
        {
            s_room1->map[i][j + 2] = '_';
            s_room1->map[i][j] = ' ';
            j++;
        }
        else
        {
            s_room1->map[i][j + 1] = '_';
            s_room1->map[i][j] = ' ';
        }
    }
    j++;
    return j;
}

void    move_right(struct s_room* s_room1)
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
            if (s_room1->map[i][j] == 'i')
            {
                move_right1(s_room1, i, j);
                j++;
            }
            else if (s_room1->map[i][j] == '_')
                j = move_right2(s_room1, i, j);
            j++;
        }
        i++;
    }
    if (s_room1->key == 0)
        s_room1->map[4][24] = 'K';
    display_map(s_room1);
}
