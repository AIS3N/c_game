/*
* Created by AIS3N
*/

#ifndef __MAIN_H__
#define __MAIN_H__
void    my_putchar(char c);
void    my_put_nbr(int n);
void	my_putstr(char *str);
int     my_strcmp(char *s1, char *s2);
int     my_strlen(char  *str);
char    *readline();

typedef struct  s_room
{
    char          **map;
    int             height;
    int             key;
    int             boucle;
    struct s_room   *next;
}               t_room;

int    move(struct s_room* s_room1, int boucle);
#endif
