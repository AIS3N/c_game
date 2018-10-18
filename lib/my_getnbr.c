/*
* Created by AIS3N
*/

int	my_getnbr(char *str)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 0;
  c = 0;
  while ((str[b] < '9' && str[b] != '\0') && str[b] < '0')
    {
      if (str[b] == '-')
	a = a + 1;
      b = b + 1;
    }
  while ((str[b] == '+' || str[b] == '-') && str[b] != '\0')
    b = b + 1;
  while ((str[b] <= '9' && str[b] >= '0') && str[b] != '\0')
    {
      c = c * 10;
      c = c + str[b] - 48;
      b = b + 1;
    }
  if (a % 2 == 1)
    c = c * (-1);
  return (c);
}
