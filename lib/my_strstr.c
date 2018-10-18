/*
* Created by AIS3N
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while ((str[i] != to_find[n]) && (str[i] != '\0'))
    {
      i = i + 1;
    }
  while (str[i + 1] != to_find[n + 1] && (to_find[n + 1] != '\0'))
    i = i + 1;
  if (str[i] == to_find[n])
    {
      n = n + 1;
      return (&str[i]);
    }
  return (0);
}
