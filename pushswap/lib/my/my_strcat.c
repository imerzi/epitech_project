/*
** my_strcat.c for ex1 in /home/delima_r/rendu/Piscine_C_J07
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Tue Oct  7 17:48:56 2014 remi delima
** Last update Mon Oct 20 13:09:44 2014 remi delima
*/

char	*my_strcat(char *dest, char *src)
{
  int	dest_len;
  int	i;

  dest_len = my_strlen(dest);
  i = 0;
  while (src[i] != '\0')
    {
      dest[dest_len + i] = src[i];
      i = i + 1;
    }
  dest[dest_len + i] = '\0';
  return (dest);
}
