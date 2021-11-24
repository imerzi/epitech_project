/*
** my_push_swap.c for push_swap in /home/delima_r/B1_PROG/CPE_2014_Pushswap/test
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sun Dec 14 14:43:32 2014 remi delima
** Last update Sun Dec 14 18:47:42 2014 remi delima
*/

#include "./include/my.h"
#include "./include/list.h"

t_list		*my_swap_la(t_list *l_a, t_list *l_b)
{
  l_a->prev = l_a->next;
  ((l_a->next)->next)->prev = (l_a->next)->prev;
  l_a->next = (l_a->next)->next;
  (l_a->prev)->next = l_a;
  (l_a->prev)->prev = NULL;
  l_a = l_a->prev;
  if ((browse_la(l_a) == 1) && l_b == NULL)
    my_putstr("sa\n");
  else
    my_putstr("sa ");
  return (l_a);
}

t_list		*my_swap_lb(t_list *l_b)
{
  l_b->prev = l_b->next;
  if ((l_b->next)->next != NULL)
    {
      ((l_b->next)->next)->prev = (l_b->next)->prev;
      l_b->next = (l_b->next)->next;
      (l_b->prev)->next = l_b;
      (l_b->prev)->prev = NULL;
      l_b = l_b->prev;
    }
  else
    {
      (l_b->prev)->next = l_b;
      l_b->next = NULL;
      (l_b->prev)->prev = NULL;
      l_b = l_b->prev;
    }
  my_putstr("sb ");
  return (l_b);
}

void	my_push_la(t_list **l_a, t_list **l_b, t_test *flag)
{
  flag->a = 0;
  *l_a = my_insert_start(*l_a, (*l_b)->nb);
  if ((*l_b)->next != NULL)
    {
      *l_b = (*l_b)->next;
      (*l_b)->prev->next = NULL;
      (*l_b)->prev = NULL;
    }
  else
    {
      *l_b = NULL;
      flag->b = 1;
    }
  if ((browse_la(*l_a) == 1) && *l_b == NULL)
    my_putstr("pa\n");
  else
    my_putstr("pa ");
}

void	my_push_lb(t_list **l_a, t_list **l_b, t_test *flag)
{
  flag->b = 0;
  *l_b = my_insert_start(*l_b, (*l_a)->nb);
  if ((*l_a)->next != NULL)
    {
      *l_a = (*l_a)->next;
      (*l_a)->prev->next = NULL;
      (*l_a)->prev = NULL;
    }
  else
    *l_a = NULL;
  my_putstr("pb ");
}
