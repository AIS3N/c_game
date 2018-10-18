/*
* Created by AIS3N
*/

char	*my_strcat(char *dest, char *src)
{
  int	n;
  int	i;

  n = 0;
  i = 0;
  while (dest[n] != '\0')
    {
      n = n + 1;
    }
  while (src[i] != '\0')
    {
      dest[n + i] = src[i];
      i = i + 1;
    }
  dest[n + i] = '\0';
  return (dest);
}
