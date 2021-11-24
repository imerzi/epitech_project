/*
** client.h for client in /home/delima_r/Semestre2/B2_UNIX/PSU_2014_minitalk/client
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sun Mar 22 18:03:58 2015 remi delima
** Last update Sun Mar 22 18:36:48 2015 remi delima
*/

#ifndef _CLIENT_H_
# define _CLIENT_H_

#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>

void	my_client(int pid, char msg);
void	my_msg(char **av);

#endif /* _CLIENT_H_ */
