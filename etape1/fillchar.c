/*
* Created by AIS3N
*/

#include "etape1main.h"
#include "fillchar.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int     size_map(void)
{
    char    f[300];
    int     k;
    int     i;
    int     new_map;

    i = 0;
    k = 0;
    new_map = open("../maps/cargo_dock.map", O_RDWR);
    read(new_map, &f, 300);
    while (f[i] != '\0')
    {
        if (f[i] == '\n')
            k++;
        i++;
    }
    close(new_map);
    return k;
}


char**    alloc_char(void)
{
    int     count;
    char    **data;

    count = 0;
    if ((data = malloc(50 * sizeof(*data))) != NULL)
    {
        while (count <= 50)
            data[count++] = malloc(50 * sizeof(data));
    }
    return data;
}


char**      fill_my_char(char** data, int k)
{
    int     new_map;
    int     i;
    int     j;
    char    c;

    i = 0;
    j = 1;
    new_map = open("../maps/cargo_dock.map", O_RDWR);
    read(new_map, &c, 1);
    data[0][0] = '\n';
    while (i < k)
    {
        if (c == '\n')
        {
            i++;
            j = 0;
        }
        data[i][j] = c;
        read(new_map, &c, 1);
        j++;
    }
    data[i][j] = '\n';
    close(new_map);
    return data;
}
