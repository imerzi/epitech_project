/*
** my_strcapitalize.c for my_strcapitalize in /home/delima_r/rendu/Piscine_C_J06/ex_09
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Fri Oct 17 13:31:04 2014 remi delima
** Last update Mon Oct 20 13:08:08 2014 remi delima
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (32 <= str[i - 1] && str[i - 1] <= 45 || (97 <= str[0] && str[0] <= 122))
	{
	  if ( str[i] >= 97 && str[i] <= 122)
	    {
	      str[i] = str[i] - 32;
	    }
	}
      i = i + 1;
    }
  return (str);
}
