/*
** my_rotate.c for rotate_push_swap in /home/delima_r/B1_PROG/CPE_2014_Pushswap/test
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sun Dec 14 14:33:42 2014 remi delima
** Last update Sun Dec 14 18:47:16 2014 remi delima
*/

#include "./include/my.h"
#include "./include/list.h"

int	browse_la(t_list *l_a)
{
  if (l_a == NULL)
    return (0);
  while (l_a->nb < (l_a->next)->nb)
    {
      l_a = l_a->next;
      if (l_a->next == NULL)
	return (1);
    }
  return (0);
}

int	browse_lb(t_list *l_b)
{
  if (l_b == NULL)
    return (1);
  while (l_b->nb > (l_b->next)->nb)
    {
      l_b = l_b->next;
      if (l_b->next == NULL)
	return (1);
    }
  return (0);
}

t_list		*my_rotate_la(t_list *l_a, t_list *l_b)
{
  t_list	*last_elem;

  last_elem = my_last_elem(l_a);
  last_elem->next = l_a;
  (l_a->next)->prev = NULL;
  l_a->next = NULL;
  l_a->prev = last_elem;
  while (l_a->prev != NULL)
    l_a = l_a->prev;
  if ((browse_la(l_a) == 1) && l_b == NULL)
    my_putstr("ra\n");
  else
    my_putstr("ra ");
  return (l_a);
}

t_list		*my_rotate_lb(t_list *l_b)
{
  t_list	*last_elem;

  last_elem = my_last_elem(l_b);
  last_elem->next = l_b;
  (l_b->next)->prev = NULL;
  l_b->prev = last_elem;
  l_b->next = NULL;
  while (l_b->prev != NULL)
    l_b = l_b->prev;
  my_putstr("rb ");
  return (l_b);
}
