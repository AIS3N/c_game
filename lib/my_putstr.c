/*
* Created by AIS3N
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str = str + 1;
    }
}
