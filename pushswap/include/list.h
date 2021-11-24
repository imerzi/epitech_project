/*
** list.h for list_push_swap in /home/delima_r/B1_PROG/CPE_2014_Pushswap/test
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sun Dec 14 14:18:43 2014 remi delima
** Last update Sun Dec 14 18:40:12 2014 remi delima
*/

#ifndef LIST_H_
# define LIST_H_

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_list
{
  int		nb;
  struct s_list	*prev;
  struct s_list	*next;
}		t_list;

typedef struct	s_test
{
  int		a;
  int		b;
  int		good;
}		t_test;

int		my_browse_la(t_list *l_a);
int		my_browse_lb(t_list *l_b);
void		my_init_test(t_test *flag);
void		my_check_la(t_list *l_a);
void		my_check_lb(t_list **l_b, t_test *flag);
t_list		*my_last_elem(t_list *last_tmp);
t_list		*my_insert_end(t_list *list, int nb);
t_list		*my_insert_start(t_list *list, int nb);
t_list		*my_rotate_la(t_list *l_a, t_list *l_b);
t_list		*my_rotate_lb(t_list *l_b);
t_list		*my_swap_la(t_list *l_a, t_list *l_b);
t_list		*my_swap_lb(t_list *l_b);
void		my_push_la(t_list **l_a, t_list **l_b, t_test *flag);
void		my_push_lb(t_list **l_a, t_list **l_b, t_test *flag);

#endif /* LIST_H_ */
