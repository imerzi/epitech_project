/*
** my_list.c for list_push_swap in /home/delima_r/B1_PROG/CPE_2014_Pushswap/test
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sun Dec 14 14:30:04 2014 remi delima
** Last update Wed Feb 11 15:02:34 2015 remi delima
*/

#include "./include/my.h"
#include "./include/list.h"

t_list		*my_create_elem(int nb)
{
  t_list	*elem;

  elem = malloc(sizeof(elem));
  elem->nb = nb;
  elem->next = NULL;
  elem->prev = NULL;
  return (elem);
}

t_list		*my_insert_end(t_list *list, int nb)
{
  t_list	*tmp;
  t_list	*elem;

  tmp = list;
  elem = my_create_elem(nb);
  if (list == NULL)
    return (elem);
  else
    {
      while (tmp->next != NULL)
	tmp = tmp->next;
      tmp->next = elem;
      elem->prev = tmp;
    }
  return (list);
}

t_list		*my_insert_start(t_list *list, int nb)
{
  t_list	*tmp;
  t_list	*elem;

  tmp = list;
  elem = my_create_elem(nb);
  if (list == NULL)
    return (elem);
  else
    {
      while (tmp->prev != NULL)

	tmp = tmp->prev;
      tmp->prev = elem;
      elem->next = tmp;
      list = list->prev;
    }
  return (list);
}

t_list		*my_last_elem(t_list *last_tmp)
{
  while (last_tmp->next != NULL)
    last_tmp = last_tmp->next;
  return (last_tmp);
}
