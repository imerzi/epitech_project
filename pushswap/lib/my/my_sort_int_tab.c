/*
** my_sort_in_tab.c for my_sort_in_tab in /home/delima_r/rendu/J4_repeat
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Wed Oct 15 14:54:51 2014 remi delima
** Last update Wed Oct 15 18:00:35 2014 remi delima
*/

void	my_sort_int_tab (int *tab, int size)
{
  int	i;

  while (i < size)
    {
      if (tab[i] > tab[i + 1])
	{
	  my_swap(&tab[i], &tab[i + 1]);
	  i = -1;
	}
      i = i + 1;
    }
}
