/*
** my_ls.c for myls in /home/delima_r/B1_UNIX/PSU_2014_my_ls
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Nov 24 14:44:47 2014 remi delima
** Last update Sun Nov 30 16:52:27 2014 remi delima
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include "./include/my.h"

void		no_option()
{
  DIR		*open;
  const char	*name;
  struct dirent	*dirp;

  name = ".";
  open = opendir(name);
  while (dirp = readdir(open))
    {
      if ((dirp->d_name[0]) != '.')
	{
	  my_putstr(dirp->d_name);
	  my_putchar('\n');
	}
    }
  closedir(open);
}

int	main(int ac, char **av)
{
  DIR	*open;

  if (ac == 1)
    no_option();
  if (ac == 2)
    {
      if (av[1][1] != 'l' && av[1][1] != 'd')
	my_printf("Invalid option\n");
      if (av[1][0] == '-')
	{
	  if (av[1][1] == 'l')
	    {
	      open = opendir(".");
	      option_l(open, ".");
	    }
	  if (av[1][1] == 'd')
	    {
	      open = opendir(".");
	      option_d_alone(open);
	    }
	}
    }
}

