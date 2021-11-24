/*
** my_swap.c for ex01 in /home/delima_r/rendu/Piscine_C_J04
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct  2 10:56:52 2014 remi delima
** Last update Mon Oct 20 11:26:45 2014 remi delima
*/

int	my_swap(int *a, int *b)
{
  int   c;

  c = *b;
  *b = *a;
  *a = c;
}
