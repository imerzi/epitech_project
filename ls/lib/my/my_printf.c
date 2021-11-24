/*
** my_printf.c for printf in /home/delima_r/rendu/PSU_2014_my_printf
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Nov  3 15:26:20 2014 remi delima
** Last update Fri Nov 14 14:26:21 2014 remi delima
*/

# include "my.h"

#define HEXA_MIN "0123456789abcdef"
#define HEXA_CAP "0123456789ABCDEF"

int		 flags(int i, int count, va_list list, const char *format)
{
  if (format[i + 1] == 's')
    my_putstr_count(va_arg(list, char *));
  else if (format[i + 1] == 'd' || format[i + 1] == 'i')
    my_put_nbr_count(va_arg(list, int));
  else if (format[i + 1] == 'c')
    my_putchar(va_arg(list, int));
  else if (format[i + 1] == 'x')
    my_putnbr_base(va_arg(list, unsigned int), HEXA_MIN);
  else if (format[i + 1] == 'X')
    my_putnbr_base(va_arg(list, unsigned int), HEXA_CAP);
  else if (format[i + 1] == 'o')
    my_putnbr_base(va_arg(list, unsigned int), "01234567");
  else if (format[i + 1] == 'b')
    my_putnbr_base(va_arg(list, int), "01");
  else if (format[i + 1] == 'u')
    my_put_nbr_unsigned(va_arg(list, unsigned int));
  else if (format[i + 1] == 'p')
    {
      my_putstr("0x");
      my_putnbr_base(va_arg(list, unsigned long), HEXA_MIN);
    }
  else if (format[i + 1] == 'S')
    my_putstr_octal(va_arg(list, char *));
  else
    my_putchar(format[i]);
}

int		my_printf(const char *format, ...)
{
  va_list	list;
  int		i;
  int		count;

  i = 0;
  count = 1;
  va_start(list, format);
  while (format[i])
    {
      if (format[i] == '%')
	{
	  count = count + flags(i, count, list, format);
	  i++;
	}
      else
	my_putchar(format[i]);
      i++;
    }
  va_end(list);
  return (count);
}
