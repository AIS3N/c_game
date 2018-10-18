/*
* Created by AIS3N
*/

char	*my_strcpy(char *dest, char *src)
{
  int	n;

  n = 0;
  while (src[n] != '\0')
    {
      dest[n] = src[n];
      n = n + 1;
    }
  dest[n] = '\0';
  return (dest);
}
