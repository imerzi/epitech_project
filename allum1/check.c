/*
** check.c for check_allum in /home/delima_r/Semestre2/B2_PROG/CPE_2014_allum1
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Wed Feb 18 15:26:24 2015 remi delima
** Last update Sun Feb 22 15:34:03 2015 remi delima
*/

#include "allum1.h"

int	check_number(int line)
{
  if (line == 0)
    {
      while (line == 0)
	{
	  my_putstr("Wrong number of line\n");
	  my_putstr("Player: Select a line ");
	  line = my_atoi(get_next_line(0));
	}
    }
  return (line);
}

int	check_allum(int pick_allum)
{
  if (pick_allum == 0)
    {
      while (pick_allum == 0)
	{
	  my_putstr("Wrong number of match/matches\n");
	  my_putstr("Player: How many match/matches ? ");
	  pick_allum = my_atoi(get_next_line(0));
	}
    }
  return (pick_allum);
}

int	check_line(int *line_game)
{
  int	nb_line;
  int	i;

  i = 0;
  nb_line = 5;
  while (i <= 4)
    {
      if (line_game[i] <= 0)
	nb_line--;
      i++;
    }
  return (nb_line);
}

void	check_end_player(int *line_game, int check, int line)
{
  if (check == 1 && line_game[line - 1] == 1)
    {
      my_putstr("\n*** You win ***\n");
      exit (0);
    }
  else if (check == 1 && line_game[line - 1] == 0)
    {
      my_putstr("\n*** You loose ***\n");
      exit (0);
    }
}

void	check_end_ia(int *line_game, int check, int line)
{
  if (check == 1 && line_game[line] == 1)
    {
      my_putstr("\n*** You loose ***\n");
      exit (0);
    }
  else if (check == 1 && line_game[line] == 0)
    {
      my_putstr("\n*** You win ***\n");
      exit (0);
    }
}
