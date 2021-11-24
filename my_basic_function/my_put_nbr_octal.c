/*
** my_put_nbr_octal.c for nbr_octal in /home/delima_r/rendu_prog/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Nov  4 16:57:44 2014 remi delima
** Last update Tue Nov  4 17:06:53 2014 remi delima
*/

unsigned int	my_put_nbr_octal(unsigned nb)
{
  if (nb >= 8)
    my_put_nbr_octal(nb / 8);
  my_putchar(nb % 8 + 48);
  return (nb);
}
