/*
* Created by AIS3N
*/

#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include "fillchar.h"

void    display_map(struct s_room* s_room1);

int    initial_pos(struct s_room* s_room1)
{

    my_putstr("\nAppuyer sur une touche puis entrer pour commencer : ");
    my_putstr("\e[H\e[2J");
    if (s_room1->next == NULL)
        s_room1->map[3][1] = 'i';
    else
        s_room1->map[9][3] = 'i';
    return 0;
}

void    display_map(struct s_room* s_room1)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (i < s_room1->height)
    {
        j = 0;
        while (j < my_strlen(s_room1->map[i])) {
            my_putchar(s_room1->map[i][j]);
            j++;
        }
        i++;
    }
}

t_room      *generate_maps2()
{
    int k;
    char **data2;
    struct s_room *s_room2;

    s_room2 = malloc(sizeof(t_room));
    data2 = alloc_char();
    k = size_map("../maps/holding_cells.map");
    data2 = fill_my_char(data2, k, "../maps/holding_cells.map");
    s_room2->map = data2;
    s_room2->height = k;
    s_room2->key = 0;
    s_room2->boucle = 0;
    s_room2->next = NULL;
    return s_room2;
}


t_room      *generate_maps()
{
    int     k;
    char**  data;
    struct s_room *s_room1;
    struct s_room *s_room2;

    s_room1 = malloc(sizeof(t_room));
    s_room2 = malloc(sizeof(t_room));
    k = 0;
    data = alloc_char();
    k = size_map("../maps/cargo_dock.map");
    data = fill_my_char(data, k, "../maps/cargo_dock.map");
    s_room1->boucle = 0;
    s_room1->map = data;
    s_room1->height = k;
    s_room1->key = 0;
    s_room2 = generate_maps2();
    s_room1->next = s_room2;
    return s_room1;
}


int      main()
{
    t_room*  s_room1;
    int     boucle;

    boucle = 0;
    system("clear");
    s_room1 = generate_maps();
    display_map(s_room1);
    initial_pos(s_room1);
    move(s_room1, boucle);
    return 0;
}
