/*
** funct.c for use_function in /home/delima_r/Semestre2/B2_PROG/CPE_2014_allum1
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sat Feb 21 12:32:26 2015 remi delima
** Last update Sun Feb 22 14:43:30 2015 remi delima
*/

#include "allum1.h"

int	my_atoi(char *str)
{
  int	i;

  i = 0;
  while (*str)
    {
      if (*str >= '0' && *str <= '9')
	{
	  i *= 10;
	  i += *str - '0';
	}
      else
	return (i);
      str++;
    }
  return (i);
}

