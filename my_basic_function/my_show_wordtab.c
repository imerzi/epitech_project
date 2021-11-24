/*
** my_show_wordtab.c for show_wordtab in /home/delima_r
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sat Nov  8 15:07:02 2014 remi delima
** Last update Tue Mar 31 10:49:09 2015 remi delima
*/

#include <stdlib.h>

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  if (tab == NULL)
    return (NULL);
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
  return (NULL);
}
