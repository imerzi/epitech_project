/*
** my_square_root.c for my_square_root in /home/delima_r/rendu/Piscine_C_J05
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct 16 10:59:52 2014 remi delima
** Last update Thu Oct 16 11:12:59 2014 remi delima
*/

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  if (nb == 1)
    {
      return (1);
    }
  while ( i <= (nb / 2))
    {
      if ((i * i) == nb)
	{
	  return (i);
	}
      i = i + 1;
    }
  return (0);
}
