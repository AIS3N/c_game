/*
* Created by AIS3N
*/

#include <unistd.h>
#include <stdlib.h>
#include "etape1main.h"
#include "fillchar.h"

void    initial_pos(struct s_room s_room1)
{
    int     i;
    int     j;
    char    *read;

    i = 0;
    j = 0;
    my_putstr("\nAppuyer sur une touche puis entrer pour commencer : ");
    read = readline();
    if (my_strcmp(read, "") != 0)
    {
        while (i < s_room1.height)
        {
            j = 0;
            while (j < 20)
            {
                if (s_room1.map[i][j] == 'O')
                    s_room1.map[i][j] = 'i';
                my_putchar(s_room1.map[i][j]);
                j++;
            }
            i++;
        }
    }
}

void    display_map(struct s_room s_room1)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (i < s_room1.height)
    {
        j = 0;
        while (j < my_strlen(s_room1.map[i]))
        {
            my_putchar(s_room1.map[i][j]);
            j++;
        }
        i++;
    }
}

int      main()
{
    char    **data;
    int     k;

    system("clear");
    data = alloc_char();
    k = size_map();
    data = fill_my_char(data, k);
    t_room s_room1;
    s_room1.map = data;
    s_room1.height = k;
    display_map(s_room1);
    initial_pos(s_room1);
    move(s_room1);
    free(data);
    return 0;
}
