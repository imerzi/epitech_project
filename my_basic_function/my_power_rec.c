/*
** my_power_rec.c for my_power_rec in /home/delima_r/rendu/Piscine_C_J05
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct 16 10:28:55 2014 remi delima
** Last update Thu Oct 16 10:45:44 2014 remi delima
*/

int	my_power_rec(int nb, int power)
{
  int	n;

  n = nb;
  if (power == 0)
    {
      return (1);
    }
  if (power > 1);
  {
    nb = n * my_power_rec(nb, power - 1);
  }
  return (nb);
}
