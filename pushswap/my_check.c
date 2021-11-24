/*
** my_check.c for check_push_swap in /home/delima_r/B1_PROG/CPE_2014_Pushswap/test
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sun Dec 14 14:56:27 2014 remi delima
** Last update Sun Dec 14 18:47:30 2014 remi delima
*/

#include "./include/my.h"
#include "./include/list.h"

void		my_check_la(t_list *l_a)
{
  t_list	*l_b;
  t_test	flag;

  l_b = NULL;
  my_init_test(&flag);
  while (flag.good == 0)
    {
      if (l_a->nb > (my_last_elem(l_a))->nb)
	l_a = my_rotate_la(l_a, l_b);
      if (l_a->nb > (l_a->next)->nb)
	l_a = my_swap_la(l_a, l_b);
      flag.a = browse_la(l_a);
      if (flag.a == 0 && (l_a->nb < (l_a->next)->nb))
	{
	  my_push_lb(&l_a, &l_b, &flag);
	  my_check_lb(&l_b, &flag);
	}
      while (flag.a == 1 && l_b != NULL)
	{
	  my_push_la(&l_a, &l_b, &flag);
	  flag.a = browse_la(l_a);
	}
      if (flag.a == 1 && flag.b == 1 && l_b == NULL)
	flag.good = 1;
    }
}

void	my_check_lb(t_list **l_b, t_test *flag)
{
  if ((*l_b)->next != NULL)
    {
      if ((*l_b)->nb < (my_last_elem(*l_b))->nb)
	*l_b = my_rotate_lb(*l_b);
      if ((*l_b)->nb < ((*l_b)->next)->nb)
	*l_b = my_swap_lb(*l_b);
      flag->b = browse_lb(*l_b);
    }
  if ((*l_b)->next == NULL)
    flag->b = 1;
}

void	my_init_test(t_test *flag)
{
  flag->a = 0;
  flag->b = 1;
  flag->good = 0;
}
