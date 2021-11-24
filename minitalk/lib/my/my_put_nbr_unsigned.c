/*
** my_put_nbr_unsigned.c for nbr_unsigned in /home/delima_r/rendu_prog/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Nov  4 17:10:37 2014 remi delima
** Last update Mon Nov 10 13:21:42 2014 remi delima
*/

int unsigned	my_put_nbr_unsigned(int unsigned nb)
{
  unsigned int	i;
  unsigned int	num;
  int		count;

  i = 1;
  count = 0;
  if (nb == 0)
    {
      my_putchar(48);
      return (0);
    }
  while (nb / i >= 10)
    {
      i = i * 10;
    }
  while (i > 0)
    {
      num = nb / i;
      my_putchar(num + 48);
      nb = nb % i;
      i = i / 10;
      count++;
    }
  return (count);
}
