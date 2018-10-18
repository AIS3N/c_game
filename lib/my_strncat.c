/*
* Created by AIS3N
*/
char	*my_strncat(char *dest, char *src, int n)
{
  int	x;
  int	i;

  x = 0;
  i = 0;
  while (dest[x] != '\0')
    {
      x = x + 1;
    }
  while (src[i] != '\0' && i < n)
    {
      dest[x + i] = src[i];
      i = i + 1;
    }
  dest[x + i] = '\0';
  return (dest);
}
