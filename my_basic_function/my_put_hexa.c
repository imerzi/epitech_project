/*
** my_put_hexa.c for put_hexa in /home/delima_r/rendu_prog/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Nov  4 16:39:56 2014 remi delima
** Last update Mon Nov 10 11:20:14 2014 remi delima
*/

int	my_put_hexa(unsigned long int nb, char *base)
{
  unsigned long int	beg;
  unsigned long int	end;
  int			count;

  count = 0;
  end = nb % 16;
  beg = (nb - end) / 16;
  if (beg)
    {
      count++;
      my_put_hexa(beg, base);
    }
  my_putchar(base[end]);
}
