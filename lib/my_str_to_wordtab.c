/*
* Created by AIS3N
*/

#include <stdlib.h>

int	alphanum(char c)
{
  if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
      || (c >= 'a' && c <= 'z'))
    return (1);
  else
    return (0);
}

int	lettre(char *str)
{
  int	b;
  int	let;
  int	sauv;

  b = 0;
  let = 0;
  sauv = 0;
  while (str[b] != '\0')
    {
      if ((str[b] >= '0' && str[b] <= '9') ||
	  (str[b] >= 'A' && str[b] <= 'Z')
	  || (str[b] >= 'a' && str[b] <= 'z'))
	{
	  let = let + 1;
	}
      else
	{
	  if (let > sauv)
	    sauv = let;
	  let = 0;
	}
      sauv = let;
      b = b + 1;
    }
  return (sauv);
}

char	*my_strcpyy(char *dest, char *str, int n)
{
  int	i;

  n = lettre(str);
  i = 0;
  while (alphanum(str[i]) == 1 && (i < n))
    {
      dest[i] = str[i];
      i = i + 1;
    }
  if (str[i] < '0'|| (str[i] > '9' && str[i] < 'A') ||
      (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
    {
      dest[i] = '\0';
    }
  return (dest);
}

int	warudo(char *str)
{
  int	d;
  int	i;

  d = 0;
  i = 0;
  while (str[d] != '\0')
    {
      if (alphanum(str[d]) == 1)
	{
	 i = i + 1;
	 while (alphanum(str[d]) == 1)
		d = d + 1;
	}
      else
       d = d + 1;
    }
  return (i);
}

char	**my_str_to_wordtab(char *str)
{
  char	**dest;
  int	d;
  int	i;

  d = 0;
  i = 0;
  dest = malloc((warudo(str) + 1) * sizeof(*dest));
  while (d < warudo(str))
    {
      dest[d] = malloc((lettre(str) + 1) * sizeof(**dest));
      d = d + 1;
    }
  d = 0;
  while (str[d] != '\0')
    {
      if (alphanum(str[d]) == 1)
	{
	  dest[i] = my_strcpyy(dest[i], &str[d], lettre(str));
	 i = i + 1;
	 while (alphanum(str[d]) == 1)
		d = d + 1;
	}
      else
       d = d + 1;
    }
  return (dest);
}
