/*
** main.c for main_push_swap in /home/delima_r/B1_PROG/CPE_2014_Pushswap/test
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Sun Dec 14 14:27:52 2014 remi delima
** Last update Sun Dec 14 18:47:07 2014 remi delima
*/

#include "./include/my.h"
#include "./include/list.h"

int		main(int ac, char **av)
{
  int		i;
  t_list	*l_a;

  l_a = NULL;
  i = 1;
  if (ac < 2)
    my_putstr("Error : Wrong argument\n");
  if (ac > 2)
    {
      while (av[i])
	{
	  l_a = my_insert_end(l_a, my_getnbr(av[i]));
	  i++;
	}
      my_check_la(l_a);
    }
  free(l_a);
  return (0);
}
