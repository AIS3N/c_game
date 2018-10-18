/*
* Created by AIS3N
*/

#include "../main.h"
#include "move2.h"
#include <stdlib.h>

void        opendoor1(struct s_room* s_room1, int i, int j)
{
    if (s_room1->map[i - 1][j] == 'x')
        s_room1->map[i - 1][j] = ' ';
}

void        opendoor(struct s_room* s_room1)
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
            if (s_room1->map[i][j] == 'i' || s_room1->map[i][j] == '_')
                opendoor1(s_room1, i, j);
            j++;
        }
        i++;
    }
    display_map(s_room1);
}

void        checkKey(struct s_room* s_room1)
{
    if (s_room1->key == 1)
    {
        opendoor(s_room1);
        my_putstr("\nVous avez ouvert la porte");
    }
    else
        my_putstr("Veuillez recuperer la cle pour ouvrir");
}

void    getkey(struct s_room* s_room1)
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
            if (s_room1->map[4][24] == 'i' || s_room1->map[4][24] == '_')
                s_room1->key = 1;
            else
                s_room1->key = 0;
            j++;
        }
        i++;
    }
    if (s_room1->key == 1)
        my_putstr("Vous avez pris la cle, dirigez vous vers la porte");
    display_map(s_room1);
}

void    lay_down(struct s_room* s_room1)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < s_room1->height)
    {
        j = 0;
        while (j < my_strlen(s_room1->map[i]))
        {
            if (s_room1->map[i][j] == 'i')
                s_room1->map[i][j] = '_';
            else if (s_room1->map[i][j] == '_')
                s_room1->map[i][j] = 'i';
            j++;
        }
        i++;
    }
    display_map(s_room1);
}
