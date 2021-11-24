/*
** client.c for client_minitalk in /home/delima_r/Semestre2/B2_UNIX/PSU_2014_minitalk/client
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Mar 10 15:16:34 2015 remi delima
** Last update Wed Mar 25 11:59:29 2015 remi delima
*/

#include "client.h"

void	my_client(int pid, char msg)
{
  int	count;
  int	i;
  int	nb;
  int	bit;

  bit = 0;
  i = 0;
  nb = msg;
  while (bit++ <= 7)
    {
      usleep(1000);
      if (nb % 2 == 1)
	kill(pid, SIGUSR1);
      else
	kill(pid, SIGUSR2);
      nb = nb / 2;
    }
}

void	my_msg(char **av)
{
  int	i;
  int	pid;
  char	*msg;

  i = 0;
  pid = my_getnbr(av[1]);
  if (pid == -1)
    exit(0);
  msg = av[2];
  while (msg[i])
    my_client(pid, msg[i++]);
  my_putstr("Message send\n");
}

int	main(int ac, char **av)
{
  if (ac != 3)
    {
      my_putstr("Error wrong arguements\n");
      exit (0);
    }
  my_msg(av);
  return (0);
}
