/*
** serv.h for _serv_h_ in /home/delima_r/Semestre2/B2_UNIX/PSU_2014_minitalk/server
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sun Mar 22 13:11:11 2015 remi delima
** Last update Sun Mar 22 18:28:15 2015 remi delima
*/

#ifndef _SERV_H_
# define _SERV_H_

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void	my_serv(char *bin);
void	my_pid();
void	catch_sig(int sig);
void	my_signal();

#endif /* _SERV_H_ */
