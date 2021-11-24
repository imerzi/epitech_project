/*
** allum1.h for alum in /home/delima_r/Semestre2/B2_PROG/CPE_2014_allum1
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sat Feb 14 15:59:46 2015 remi delima
** Last update Sun Feb 22 14:49:31 2015 remi delima
*/

#ifndef _ALLUM1_H_
# define _ALLUM1_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "./include/my.h"

int	my_atoi(char *str);
int	init_game(int *game);
int	ia(int *line_game, int line, int pick_allum, int check);
void	game(int line);
void	aff_game(int *line_game);
char	*get_next_line(const int fd);

#endif /* _ALLUM1_H_ */
