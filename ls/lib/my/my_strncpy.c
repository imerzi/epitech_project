/*
** my_strncpy.c for ex2 in /home/delima_r/rendu/Piscine_C_J06
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct  6 10:47:28 2014 remi delima
** Last update Mon Oct 20 12:58:53 2014 remi delima
*/

char	*my_strncpy(char *dest, char *src, int nb)
{
  int	loop;

  loop = 0;
  while (loop < nb && src[loop] != '\0')
    {
      dest[loop] = src[loop];
      loop  = loop + 1;
    }
  while (loop < nb)
    {
      dest[loop] = '\0';
      loop = loop + 1;
    }
  return (dest);
}
