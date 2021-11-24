/*
** my_putstr_octal.c for putstr_octal in /home/delima_r/rendu_prog/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Wed Nov  5 16:12:50 2014 remi delima
** Last update Thu Nov 13 10:55:02 2014 remi delima
*/

int	in(int i, char *str)
{
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] >= 127 && str[i] != 0)
	{
	  my_putchar(92);
	  my_putnbr_base(str[i], "01234567");
	  if (str[i] <= 7)
	    {
	      my_putchar('\b');
	      my_putstr_octal("00");
	      my_putnbr_base(str[i], "01234567");
	    }
	  if (str[i] > 7)
	    {
	      my_putchar('\b');
	      my_putchar('\b');
	      my_putchar('0');
	      my_putnbr_base(str[i], "01234567");
	    }
	}
      else
	my_putchar(str[i]);
      i++;
    }
}

int	my_putstr_octal(char *str)
{
  int	i;
  int	count;
  char	len_str;

  i = 0;
  count = 0;
  in(i, str);
  return (count);
}
