/*
** my_revstr.c for ex3 in /home/delima_r/rendu/Piscine_C_J06
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct  6 13:39:35 2014 remi delima
** Last update Mon Oct 20 12:59:35 2014 remi delima
*/

char	*my_revstr(char *str)
{
  int	d;
  int	lenght;

  d = 0;
  lenght = my_strlen(str) - 1;
  while (d  < lenght / 2 + 1)
    {
      my_swap(&str[d], &str[lenght - d]);
      d = d + 1;
    }
  return(str);
}
