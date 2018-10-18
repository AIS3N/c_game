/*
* Created by AIS3N
*/

#include "etape1main.h"
#include "movement.h"
#include <stdlib.h>

void    move_top(struct s_room s_room1)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (i < s_room1.height)
    {
        j = 0;
        while (j < 20)
        {
            if (s_room1.map[i][j] == 'i')
            {
                if (s_room1.map[i - 1][j] != 'X')
                {
                    s_room1.map[i][j] = ' ';
                    s_room1.map[i - 1][j] = 'i';
                }
            }
            j++;
        }
        i++;
    }
    display_map(s_room1);
}


void    move_bottom(struct s_room s_room1)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (i < s_room1.height)
    {
        j = 0;
        while (j < 20)
        {
            if (s_room1.map[i][j] == 'i')
            {
                if (s_room1.map[i + 1][j] != 'X')
                {
                    s_room1.map[i][j] = ' ';
                    s_room1.map[i + 1][j] = 'i';
                    i++;
                }
            }
            j++;
        }
        i++;
    }
    display_map(s_room1);
}

void    move_right(struct s_room s_room1)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (i < s_room1.height)
    {
        j = 0;
        while (j < my_strlen(s_room1.map[i]))
        {
            if (s_room1.map[i][j] == 'i')
            {
                if (s_room1.map[i][j + 1] != 'X')
                {
                    s_room1.map[i][j] = ' ';
                    s_room1.map[i][j + 1] = 'i';
                    j++;
                }

            }
            j++;
        }
        i++;
    }
    display_map(s_room1);
}

void    move_left(struct s_room s_room1)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (i < s_room1.height)
    {
        j = 0;
        while (j < 20)
        {
            if (s_room1.map[i][j] == 'i')
            {
                if (s_room1.map[i][j - 1] != 'X')
                {
                    s_room1.map[i][j] = ' ';
                    s_room1.map[i][j - 1] = 'i';
                }
            }
            j++;
        }
        i++;
    }
    display_map(s_room1);
}


void    move(struct s_room s_room1)
{
    char    *read;
    int     i;
    int     boucle;

    boucle = 0;
    i = 0;
    while (boucle < 2)
    {
        my_putstr("\nEntrez votre commande >");
        read = readline();
        i = 0;
        while (i < 4)
        {
            if (my_strcmp(read, table[i].name) == 0 && i < 4)
            {
                table[i].move(s_room1);
                if ( s_room1.map[0][9] == 'i')
                {
                    my_putstr("\nTo Be Continued ...\n");
                    boucle = 2;
                }
            }
            i++;
        }
    }
}
