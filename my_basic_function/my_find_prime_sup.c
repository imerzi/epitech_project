/*
** my_find_prime_sup.c for my_find_prime_supp in /home/delima_r/rendu/Piscine_C_J05
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct 16 13:09:47 2014 remi delima
** Last update Thu Oct 16 13:15:31 2014 remi delima
*/
#include <stdio.h>

int	my_find_prime_sup(int nb)
{
  int	sup;

  while ((sup = my_is_prime(nb)) == 0)
    {
      nb = nb + 1;
    }
  return (nb);
}
