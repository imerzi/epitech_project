/*
** block.c for block_ls in /home/delima_r/B1_UNIX/PSU_2014_my_ls
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sat Nov 29 15:15:16 2014 remi delima
** Last update Sun Nov 30 16:27:31 2014 remi delima
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <unistd.h>
#include <dirent.h>
#include "./include/my.h"

void	blocks(char *name)
{
  struct stat	buffer;
  struct dirent	*dirp;
  DIR		*open;
  int	count;

  count = 0;
  open = opendir(name);
  if (open == NULL)
    {
      my_printf("Error opendir\n");
      return;
    }
  while (dirp = readdir(open))
    {
      if ((dirp->d_name[0]) != '.')
	{
	  stat(dirp->d_name, &buffer);
	  count = (buffer.st_blocks) + count;
	}
    }
  my_putstr("total ");
  my_put_nbr(count / 2);
  my_putchar('\n');
  closedir(open);
}
