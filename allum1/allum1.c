/*
** allum1.c for game_allum in /home/delima_r/Semestre2/B2_PROG/CPE_2014_allum1
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sat Feb 14 14:19:04 2015 remi delima
** Last update Sun Feb 22 14:43:12 2015 remi delima
*/

#include "allum1.h"

int	init_game(int *game)
{
  game[0] = 1;
  game[1] = 2;
  game[2] = 3;
  game[3] = 4;
  game[4] = 5;
  return (*game);
}

int	start_game()
{
  int	begin;

  while (42)
    {
      my_putstr("Do you want to start(1) or not(0) ? \n");
      begin = my_atoi(get_next_line(0));
      if (begin == 1)
	return (begin);
      else if (begin == 0)
	return (begin);
    }
}

void	aff_allum(int  *line_game)
{
  int	i;

  i = 0;
  while (i < 5)
    {
      my_put_nbr(i + 1);
      my_putstr(") ");
      game(line_game[i]);
      my_putchar('\n');
      i++;
    }
}

void	game(int line_game)
{
  int	i;

  i = 0;
  while (i < line_game)
    {
      write(1, "|", 1);
      i++;
    }
}
