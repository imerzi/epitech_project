/*
** my_is_prime.c for my_is_prime in /home/delima_r/rendu/Piscine_C_J05
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct 16 12:53:13 2014 remi delima
** Last update Thu Oct 16 13:02:43 2014 remi delima
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb == 0 || nb == 1)
    {
      return (0);
    }
  while (i < nb)
    {
      if (nb % i == 0)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
