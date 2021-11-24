/*
** my_putstr.c for ex02 in /home/delima_r/rendu/Piscine_C_J04/tests
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct  2 15:47:33 2014 remi delima
** Last update Thu Oct  2 16:45:31 2014 remi delima
*/

int	my_putstr(char *str)
{
  while (*str != 0)
      {
	my_putchar(*str);
	str = str + 1;
      }
}
