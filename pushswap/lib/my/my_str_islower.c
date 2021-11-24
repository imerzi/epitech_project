/*
** my_str_islower.c for my_str_islower in /home/delima_r/rendu/c_good
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct 20 13:22:54 2014 remi delima
** Last update Tue Nov  4 10:24:54 2014 remi delima
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  i++;
	}
      else
	return (0);
    }
  return (1);
}
