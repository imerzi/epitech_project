/*
** test_open.c for open in /home/delima_r/TEST
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Wed Nov 19 13:03:31 2014 remi delima
** Last update Wed Apr  8 10:02:10 2015 remi delima
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_put_nbr(int);
void	my_putstr(char *);

int	main(int ac, char **av)
{
  int	fd;
  int	ret;
  char	buffer[4096];

  fd = open(av[1], O_RDONLY, S_IRWXU);
  if (fd == -1)
    {
      my_putstr("open error");
      return (1);
    }
  ret = read(fd, buffer, 1000000000);
  read(fd, buffer, ret);
  my_putstr(buffer);
  close(fd);
  return (0);
}
