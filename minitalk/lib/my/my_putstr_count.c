/*
** my_putstr_count.c for putstr_count in /home/delima_r/rendu_prog/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Nov 10 12:35:43 2014 remi delima
** Last update Mon Nov 10 13:19:43 2014 remi delima
*/

int	my_putstr_count(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
      count++;
    }
  return (count);
}
