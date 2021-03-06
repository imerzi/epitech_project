/*
** my_getnbr.c for my_getnbr in /home/delima_r
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Oct 21 17:39:00 2014 remi delima
** Last update Tue Nov  4 15:56:46 2014 remi delima
*/

int	if_neg(char *str)
{
  int	i;
  int	counter;
  
  i = 0;
  counter = 0;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
	{
	  counter = counter + 1;
	}
      i = i + 1;
    }
  if (counter % 2 != 0)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

int	value(char c)
{
  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;
  
  i = 0;
  nbr = 0;
  while (value(str[i]) == 0)
    {
      i = i + 1;
    }
  while (value(str[i]) == 1)
    {
	nbr = ((nbr * 10) + (str[i] - 48));
	i = i + 1;
    }
  if (if_neg(str) == 1)
    {
      nbr = -nbr;
    }
  return (nbr);
}
