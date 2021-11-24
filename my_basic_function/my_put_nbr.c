/*
** my_put_nbr.c for my_put_nbr in /home/delima_r/rendu/J3
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Fri Oct 10 16:51:33 2014 remi delima
** Last update Thu Oct 30 15:56:16 2014 remi delima
*/

int	my_put_nbr(int nb)
{
  int	div;

  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
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
    }
}
