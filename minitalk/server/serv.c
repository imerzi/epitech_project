/*
** serv.c for serv in /home/delima_r/Semestre2/B2_UNIX/PSU_2014_minitalk/server
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Mar 10 15:18:33 2015 remi delima
** Last update Wed Mar 25 12:00:04 2015 remi delima
*/

#include "serv.h"

void	my_serv(char *bin)
{
  char	c;
  int	i;
  int	power;

  i = 7;
  c = 0;
  power = 7;
  while (i >= 0)
    c = c + (bin[i--] * my_power_rec(2, power--));
  my_putchar(c);
}

void	my_pid()
{
  pid_t	pid;

  pid = getpid();
  my_putstr("PID: ");
  my_put_nbr(pid);
  my_putchar('\n');
}

void		catch_sig(int sig)
{
  static int	i;
  static char	bin[8];

  if (sig == SIGUSR1)
    bin[i++] = 1;
  if (sig == SIGUSR2)
    bin[i++] = 0;
  if (i == 8)
    {
      my_serv(bin);
      i = 0;
      while (i < 7)
	bin[i++] = 0;
      i = 0;
    }
}

void	my_signal()
{ 
  while (1)
    {
      usleep(1000);
      if (signal(SIGUSR1, catch_sig) == SIG_ERR)
	exit (0);
      if (signal(SIGUSR2, catch_sig) == SIG_ERR)
	exit (0);
    }
}

int	main()
{
  my_putstr("Welcome on the server\n");
  my_pid();
  my_putstr("Waiting for messages...\n");
  my_signal();
  return (0);
}
