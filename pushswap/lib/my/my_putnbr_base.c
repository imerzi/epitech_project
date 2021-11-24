/*
** my_putnbr_base.c for putnbr_base in /home/delima_r/rendu_prog/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Nov 10 11:23:51 2014 remi delima
** Last update Thu Nov 27 14:38:25 2014 remi delima
*/

int			my_putnbr_base(unsigned long int nb, char *base)
{
  unsigned long int	result;
  unsigned long int	div;
  unsigned long int	size_base;

  size_base = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  div = 1;
  while ((nb / div ) >= size_base)
    {
      div = div * size_base;
    }
  while (div > 0)
    {
      result = (nb / div) % size_base;
      my_putchar(base[result]);
      div = div / size_base;
    }
}
