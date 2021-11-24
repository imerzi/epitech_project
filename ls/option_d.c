/*
** option_d.c for ls_d in /home/delima_r/B1_UNIX/PSU_2014_my_ls
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sat Nov 29 16:34:35 2014 remi delima
** Last update Sun Nov 30 16:21:59 2014 remi delima
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include "./include/my.h"

void	option_d_alone(DIR *open)
{
  struct dirent *dirp;

  if (open == NULL)
    {
      return;
    }
  while (dirp = readdir(open))
    {
      if ((dirp->d_name[0]) == '.')
	my_putchar(dirp->d_name[0]);
      my_putchar('\b');
    }
  closedir(open);
  my_putchar('\n');
}
