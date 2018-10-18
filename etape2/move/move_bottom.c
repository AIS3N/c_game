/*
* Created by AIS3N
*/

#include "../main.h"
#include "move2.h"
#include <stdlib.h>

void    move_bottom1(struct s_room* s_room1, int i, int j)
{
    if (s_room1->map[i + 1][j] != 'X' && s_room1->map[i + 1][j] != 'H'
        && s_room1->map[i + 1][j] != 'x')
    {
        s_room1->map[i][j] = ' ';
        s_room1->map[i + 1][j] = 'i';
    }
}

int    move_bottom2(struct s_room* s_room1, int i, int j)
{
    if (s_room1->map[i + 1][j] != 'X' && s_room1->map[i + 1][j] != 'x')
    {
        if (s_room1->map[i + 1][j] == 'H')
        {
            s_room1->map[i + 2][j] = '_';
            s_room1->map[i][j] = ' ';
            i++;
        }
        else
        {
            s_room1->map[i + 1][j] = '_';
            s_room1->map[i][j] = ' ';
        }
    }
    return i;
}

void    move_bottom(struct s_room* s_room1)
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
                move_bottom1(s_room1, i, j);
                i++;
            }
            else if (s_room1->map[i][j] == '_')
            {
                i = move_bottom2(s_room1, i ,j);
                i++;
            }
            j++;
        }
        i++;
    }
    display_map(s_room1);
}
