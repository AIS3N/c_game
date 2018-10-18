/*
* Created by AIS3N
*/

#ifndef __MOVEMENT_H_
#define __MOVEMENT_H_
void    display_map(struct s_room s_room1);
void    move_top(struct s_room s_room1);
void    move_bottom(struct s_room s_room1);
void    move_left(struct s_room s_room1);
void    move_right(struct s_room s_room1);
void    move(struct s_room s_room1);

typedef struct s_readline
{
    char    *name;
    void (*move) (struct s_room s_room1);
}               t_readline;


t_readline      table[4] = {
        {"w", move_top},
        {"a", move_left},
        {"s", move_bottom},
        {"d", move_right}
};

#endif
