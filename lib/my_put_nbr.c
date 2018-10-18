/*
* Created by AIS3N
*/

void	my_putchar(char c);

void	my_putstr(char *str);

void	my_put_nbr(int  n)
{
  int	d;

  d = 1;
  if (n < 0)
    {
      n = n * (-1);
      my_putchar('-');
    }
  if (n < -2147483647)
    my_putstr("2147483648");
  else
    {
      while ((n / d) > 9)
	d = d * 10;
      while (d >= 1)
	{
	  my_putchar((n / d) % 10 + 48);
	  d = d / 10;
	}
    }
}
