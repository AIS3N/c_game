/*
* Created by AIS3N
*/

void	my_putchar(char c);

int	my_strlen(char *str)
{
  int	n;
  n = 0;
  while (*str != '\0')
    {
      str = str + 1;
      n = n + 1;
    }
  return (n);
}
