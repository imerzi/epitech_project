/*
** my_strlen.c for ex03 in /home/delima_r/rendu/Piscine_C_J04/tests
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct  2 16:50:52 2014 remi delima
** Last update Tue Apr  7 17:12:17 2015 remi delima
*/

int	my_strlen(char *str)
{
  int	len;

  len = 0;
  while (str[len] != 0)
    len++;
  return (len);
}
