/*
** my_put_base.c for put_base in /home/delima_r/rendu_prog/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Wed Nov  5 13:48:17 2014 remi delima
** Last update Wed Mar 11 15:05:07 2015 remi delima
*/

int	my_putnbr_base(int nb, char *base)
{
  int	a;
  int	len_str;

  if (nb == -2147483648)
    return (nb);
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  len_str = my_strlen(base);
  a = nb % len_str;
  nb = nb / len_str;
  if (nb > 0)
    my_putnbr_base(nb, base);
  return (nb);
}
