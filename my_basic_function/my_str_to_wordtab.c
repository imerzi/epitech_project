/*
** my_str_to_wordtab.c for str_to_wordtab in /home/delima_r
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sat Nov  8 15:02:58 2014 remi delima
** Last update Fri Feb 13 13:53:39 2015 remi delima
*/

#include <stdlib.h>
#include <stdio.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      i++;
    }
  return (i);
}

int	find_word(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	  || (str[i] >= 97 && str[i] <= 122))
	{
	  while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
		 || (str[i] >= 97 && str[i] <= 122))
	    i++;
	  nb++;
	}
      i++;
    }
  return (nb);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	nb;
  int	i;
  int	j;
  int	k;

  i = k = 0;
  nb = find_word(str);
  tab = malloc(sizeof(char *) * nb + 1);
  while (str[i] != '\0')
    {
      tab[k] = malloc(sizeof(char) * my_strlen(str));
      while ((str[i] <= '/' && str[i] >= 32) || (str[i] <= '@' && str[i] >= ':' ) ||
	     (str[i] <= '`' && str[i] >= '[') || (str[i] <= 127 && str[i] >= '{'))
	i++;
      j = 0;
      while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	     || (str[i] >= 97 && str[i] <= 122))
	{
	  tab[k][j++] = str[i++];
	}
      k++;
    }
  tab[k] = NULL;
  my_show_wordtab(tab);
  return (tab);
}

int	main(int ac, char **av)
{
  int	i;
  char	**tab;

  i = 1;
  while (av[i])
    {
      my_str_to_wordtab(av[i]);
      i++;
    }
}
