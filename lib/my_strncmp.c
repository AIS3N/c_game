/*
* Created by AIS3N
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	a;
  int	b;

  i = 0;
  a = -1;
  b = 1;
  while ((s1[i] || s2[i] != '\0') && (i < n))
    {
      if (s1[i] < s2[i])
	return (a);
      if (s1[i] > s2[i])
	return (b);
      i = i + 1;
    }
  return (0);
}
