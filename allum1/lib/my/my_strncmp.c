/*
** my_strncmp.c for my_strncmp in /home/delima_r/rendu/c_good
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct 20 13:16:06 2014 remi delima
** Last update Tue Nov  4 10:29:28 2014 remi delima
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((s1[i] || s2[i]) && i < n)
    {
      if (s1[i] < s2[i])
	{
	  return (-1);
	}
      if (s1[i] > s2[i])
	{
	  return (1);
	}
      i = i + 1;
    }
  if ((s1[i] < s2[i]) && i < n)
    {
      return (-1);
    }
  if ((s1[i] > s2[i]) && i < n)
    {
      return (1);
    }
  return (0);
}
