/*
** option_l.c for ls_l in /home/delima_r/B1_UNIX/PSU_2014_my_ls
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sat Nov 29 13:38:04 2014 remi delima
** Last update Sat Jul  4 09:53:37 2015 remi delima
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include "./include/my.h"

void	droit(struct stat buffer)
{
  my_printf(S_ISDIR(buffer.st_mode) ? "d" : "-");
  my_printf(buffer.st_mode & S_IRUSR ? "r" : "-");
  my_printf(buffer.st_mode & S_IWUSR ? "w" : "-");
  my_printf(buffer.st_mode & S_IXUSR ? "x" : "-");
  my_printf(buffer.st_mode & S_IRGRP ? "r" : "-");
  my_printf(buffer.st_mode & S_IWGRP ? "w" : "-");
  my_printf(buffer.st_mode & S_IXGRP ? "x" : "-");
  my_printf(buffer.st_mode & S_IROTH ? "r" : "-");
  my_printf(buffer.st_mode & S_IWOTH ? "w" : "-");
  my_printf(buffer.st_mode & S_IXOTH ? "x" : "-");
}

void	status(struct stat buffer, struct passwd *pwd, struct group *grp)
{
  my_putchar(' ');
  my_put_nbr(buffer.st_nlink);
  my_putchar(' ');
  my_putstr(pwd->pw_name);
  my_putchar(' ');
  my_putstr(getgrgid(buffer.st_gid)->gr_name);
  my_putchar(' ');
  if (buffer.st_size < 10000)
    my_putchar(' ');
  my_put_nbr(buffer.st_size);
  my_putchar(' ');
}

void	timer(struct stat buffer)
{
  int	i;
  char	*tab;

  i = 0;
  tab = ctime(&(buffer.st_mtime));
  while (tab[i] != '\0')
    i++;
  tab[i - 1] = '\0';
  tab[4] = 'n';
  tab[7] = '.';
  my_putchar(tab[4]);
  my_putchar(tab[5]);
  my_putchar(tab[6]);
  my_putchar(tab[7]);
  my_putchar('\t');
  my_putchar(tab[8]);
  my_putchar(tab[9]);
  my_putchar(' ');
  my_putchar(tab[11]);
  my_putchar(tab[12]);
  my_putchar(tab[13]);
  my_putchar(tab[14]);
  my_putchar(tab[15]);
  my_putchar(' ');
}

void		option_l(DIR *open, char *name)
{
  struct dirent	*dirp;
  struct passwd	*pwd;
  struct group	*grp;
  struct stat	buffer;

  blocks(name);
  while (dirp = readdir(open))
    {
      if ((dirp->d_name[0]) != '.')
  	{
	  stat(dirp->d_name, &buffer));
  	  pwd = getpwuid(buffer.st_uid);
  	  grp = getgrgid(buffer.st_gid);
  	  droit(buffer);
  	  status(buffer, pwd, grp);
  	  timer(buffer);
  	  my_putstr(dirp->d_name);
  	  my_putchar('\n');
  	}
    }
  closedir(open);
}
