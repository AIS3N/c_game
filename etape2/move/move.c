/*
* Created by AIS3N
*/

#include "../main.h"
#include "move.h"
#include <stdlib.h>


int     ending2(struct s_room * s_room1)
{
    int boucle;

    boucle = 0;
    if (s_room1->map[0][11] == 'i' || s_room1->map[0][11] == '_' ||
        s_room1->map[0][19] == 'i' || s_room1->map[0][19] == '_')
    {
        my_putstr("\nTo Be Continued ...\n");
        boucle = 2;
    }
    return boucle;
}


t_room      *ending1(struct s_room *s_room1)
{
    if (s_room1->map[0][9] == 'i')
    {
        s_room1 = s_room1->next;
        display_map(s_room1);
        initial_pos(s_room1);
    }
    return s_room1;
}


int   move(struct s_room* s_room1, int boucle)
{
    char    *read;
    int     i;

    i = 0;
    display_map(s_room1);
    while (boucle < 2)
    {
        my_putstr("\nEntrez votre commande >");
        read = readline();
        i = 0;
        s_room1 = ending1(s_room1);
        if ((boucle = ending2(s_room1)) == 2)
            i = 8;
        while (i < 7)
        {
            if (my_strcmp(read, table[i].name) == 0 && i < 7)
            {
                table[i].move(s_room1);
                i = 7;
            }
            i++;
        }
    }
    return 0;
}
