/*
** my_str_isprintable.c for my_str_isprintable in /home/delima_r/rendu/c_good
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct 20 13:24:03 2014 remi delima
** Last update Tue Nov  4 10:27:53 2014 remi delima
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] <= 126)
	{
	  i++;
	}
      else
	return (0);
    }
  return (1);
}
