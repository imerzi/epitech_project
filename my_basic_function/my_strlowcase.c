/*
** my_strlowcase.c for my_strlowcase in /home/delima_r/rendu/Piscine_C_J06/ex_08
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Fri Oct 17 13:16:35 2014 remi delima
** Last update Fri Oct 17 13:21:31 2014 remi delima
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  str[i] = str[i] + 32;
	}
      i = i + 1;
    }
  return (str);
}
