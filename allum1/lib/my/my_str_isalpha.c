/*
** my_str_isalpha.c for my_str_isalpha in /home/delima_r/rendu/c_good
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct 20 13:21:51 2014 remi delima
** Last update Tue Nov  4 10:29:48 2014 remi delima
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
	{
	  i++;
	}
      else
	return (0);
    }
    return (1);
}
