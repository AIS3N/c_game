/*
* Created by AIS3N
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  int	n;
  char	*dest;

  n = 0;
  while (str[n])
    {
      n = n + 1;
    }
  dest = malloc((n + 1) * sizeof(str));
  n = 0;
  while (str[n] != '\0')
    {
      dest[n] = str[n];
      n = n + 1;
    }
  dest[n] = str[n];
  return (dest);
}
