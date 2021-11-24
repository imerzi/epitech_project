/*
** my_find_prime_sup.c for my_find_prime_supp in /home/delima_r/rendu/Piscine_C_J05
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct 16 13:09:47 2014 remi delima
** Last update Wed Oct 22 16:31:36 2014 remi delima
*/

int	my_find_prime_sup(int nb)
{
  while ((my_is_prime(nb)) == 0)
    {
      nb = nb + 1;
    }
  return (nb);
}
