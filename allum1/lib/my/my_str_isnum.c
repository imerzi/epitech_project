/*
** my_str_isnum.c for my_str_isnum in /home/delima_r/rendu/c_good
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct 20 13:22:26 2014 remi delima
** Last update Tue Nov  4 10:23:41 2014 remi delima
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  i++;
	}
      else
	return (0);
    }
  return (1);
}
