/*
** my_str_isupper.c for my_str_isupper in /home/delima_r/rendu/c_good
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct 20 13:23:24 2014 remi delima
** Last update Tue Nov  4 10:26:37 2014 remi delima
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  i++;
	}
      else
	return (0);
    }
  return (1);
}
