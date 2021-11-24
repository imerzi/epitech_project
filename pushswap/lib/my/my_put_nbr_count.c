/*
** my_put_nbr_count.c for put_nbr_count in /home/delima_r/rendu_prog/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Nov 10 12:33:04 2014 remi delima
** Last update Mon Nov 10 13:22:44 2014 remi delima
*/

int	my_put_nbr_count(int nb)
{
  int	div;
  int	count;

  count = 0;
  while (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
      my_putchar(nb);
    }
  div = 1;
  while (nb / div > 9)
    {
      div = div * 10;
    }
  while (div != 0)
    {
      my_putchar('0' + (nb / div) % 10);
      nb = nb % div;
      div = div / 10;
      count++;
    }
  return (count);
}
