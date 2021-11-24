/*
** my_put_nbr_bin.c for put_bin in /home/delima_r/rendu_prog/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Nov  4 16:47:40 2014 remi delima
** Last update Tue Nov  4 16:57:18 2014 remi delima
*/

int	my_put_nbr_bin(int nb)
{
  if (nb >= 2)
    my_put_nbr_bin(nb / 2);
  my_putchar(nb % 2 + 48);
  return (nb);
}
