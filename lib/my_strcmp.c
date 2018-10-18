/*
* Created by AIS3N
*/
int	my_strcmp(char *s1, char *s2)
{
  int	n;
  int	a;
  int	b;

  n = 0;
  a = -1;
  b = 1;
  while (s1[n] || s2[n] != '\0')
    {
      if (s1[n] < s2[n])
	return (a);
      if (s1[n] > s2[n])
	return (b);
      n = n + 1;
    }
  return (0);
}
