/*
* Created by AIS3N
*/

#ifndef __MOVE_H_
#define __MOVE_H_
void    display_map(struct s_room *s_room1);
void    move_top(struct s_room *s_room1);
void    move_bottom(struct s_room *s_room1);
void    move_left(struct s_room *s_room1);
void    move_right(struct s_room *s_room1);
int    move(struct s_room *s_room1, int boucle);
void    lay_down(struct s_room *s_room1);
void    getkey(struct s_room *s_room1);
void    checkKey(struct s_room *s_room1);
void    opendoor(struct s_room *s_room1);

typedef struct s_readline
{
    char    *name;
    void (*move) (struct s_room *s_room1);
}               t_readline;


t_readline      table[7] = {
        {"w", move_top},
        {"a", move_left},
        {"s", move_bottom},
        {"d", move_right},
        {"c", lay_down},
        {" ", getkey},
        {"e", checkKey}
};
int    initial_pos(struct s_room *s_room1);

#endif
