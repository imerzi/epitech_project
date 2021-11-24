/*
** get_next_line.c for get_next_line in /home/delima_r/B1_PROG/CPE_2014_bsq
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Jan 15 15:39:49 2015 remi delima
** Last update Thu Feb 26 13:06:08 2015 remi delima
*/

#include <stdlib.h>
#include <unistd.h>

#define BUFFER 4096

int	my_get_next_line(int fd, int *i, int *nb, char *buf)
{
  while (buf[*i] && buf[*i] != '\n')
    {
      (*i)++;
      if (read_get_next_line(fd, i, nb, buf))
	return (1);
    }
  return (0);
}

int	read_get_next_line(int fd, int *i, int *nb, char *buf)
{
  if (*i == *nb)
    {
      *i = 0;
      if (!(*nb = read(fd, buf, BUFFER)))
	return (1);
    }
  return (0);
}

char		*get_next_line(const int fd)
{
  static char	buf[BUFFER];
  static int	i = 0;
  static int	nb = 0;
  char		*str = NULL;
  int		n;

  n = 0;
  if (read_get_next_line(fd, &i, &nb, buf))
    return (0);
  str = malloc(sizeof(char) * BUFFER);
  while (buf[i] && buf[i] != '\n' && n < BUFFER)
    {
      str[n++] = buf[i++];
      if (read_get_next_line(fd, &i, &nb, buf))
	return (str);
    }
  if (n == BUFFER)
    if (my_get_next_line(fd, &i, &nb, buf))
      return (str);
  i++;
  return (str);
}
