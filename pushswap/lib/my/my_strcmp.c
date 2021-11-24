/*
** my_strcmp.c for my_strcmp in /home/delima_r/rendu/c_good
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct 20 13:15:13 2014 remi delima
** Last update Tue Nov  4 10:13:34 2014 remi delima
*/

#include <string.h>

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 == *s2)
    {
      if (*s1 == '\0')
	{
	  return (0);
	}
      s1 = s1 + 1;
      s2 = s2 + 1;
    }
  return *s1 < *s2 ? -1 : 1;
}
