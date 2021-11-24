/*
** main.c for main in /home/delima_r/Semestre2/B2_PROG/Allum1
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Feb 10 15:01:38 2015 remi delima
** Last update Sun Feb 22 16:12:30 2015 remi delima
*/

#include "allum1.h"

void	player(int *line_game)
{
  int	line;
  int	pick_allum;
  int	player_value_allum;
  int	check;

  srand(time(NULL));
  while (42)
    {
      check = check_line(line_game);
      my_putstr("Player: Select a line ");
      line = my_atoi(get_next_line(0));
      line = check_number(line);
      my_putstr("Player: How many match/matches ? ");
      pick_allum = my_atoi(get_next_line(0));
      pick_allum = check_allum(pick_allum);
      player_value_allum = line_game[line - 1];
      line_game[line - 1] = player_value_allum - pick_allum;
      my_putchar('\n');
      aff_allum(line_game);
      check_end_player(line_game, check, line);
      my_putchar('\n');
      ia(line_game, line, pick_allum, check);
    }
}

int	ia(int *line_game, int line, int pick_allum, int check)
{
  int	ia_value_allum;

  my_putstr("IA TURN\n");
  line = rand() % 5;
  while (line_game[line] == 0)
    line = rand() % 5;
  if (line > 0)
    {
      pick_allum = rand() % line + 1;
      if (pick_allum == 0)
	pick_allum = rand() % line + 1;
    }
  else if (line == 0 && line_game[line] != 0)
    pick_allum = 1;
  ia_value_allum = line_game[line];
  line_game[line] = ia_value_allum - pick_allum;
  check_end_ia(line_game, check, line);
  my_putchar('\n');
  aff_allum(line_game);
}

int	main()
{
  int	flag_start;
  int	*game;

  if ((game = malloc(5)) == NULL)
    {
      my_putstr("Error with allocation for game\n");
      return (0);
    }
  init_game(game);
  my_putstr("*** Welcome ! ***\n\n");
  flag_start = start_game();
  if (flag_start == 1)
    {
      my_putstr("*** Allum1 started ***\n*** Player vs IA ***\n\n");
      aff_allum(game);
      my_putchar('\n');
      player(game);
    }
  else if (flag_start == 0)
    {
      my_putstr("*** Allum1 exit ! ***\n");
      exit (0);
    }
}
