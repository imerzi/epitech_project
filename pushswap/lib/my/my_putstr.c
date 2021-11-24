/*
** my_putstr.c for ex02 in /home/delima_r/rendu/Piscine_C_J04/tests
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct  2 15:47:33 2014 remi delima
** Last update Fri Dec 12 09:05:24 2014 remi delima
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
      {
	my_putchar(str[i]);
	i = i + 1;
      }
}
