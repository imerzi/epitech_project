/*
** my_strncat.c for ex2 in /home/delima_r/rendu/Piscine_C_J07
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Oct  7 18:03:42 2014 remi delima
** Last update Mon Oct 20 13:10:41 2014 remi delima
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	dest_len;
  int	i;

  dest_len = my_strlen(dest);
  i = 0;
  while (i < nb && src[i] != '\0')
    {
      dest[dest_len + 1] = src [i];
      i = i + 1;
    }
  dest[dest_len + 1] = '\0';
  return (dest);
}
