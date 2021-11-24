/*
** my_strupcase.c for my_strupcase in /home/delima_r/rendu/Piscine_C_J06/ex_07
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Fri Oct 17 11:35:34 2014 remi delima
** Last update Fri Oct 17 13:16:23 2014 remi delima
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  return (str);
}
