/*
** my_strcpy.c for ex1 in /home/delima_r/rendu/Piscine_C_J06
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Mon Oct  6 09:16:57 2014 remi delima
** Last update Tue Oct 21 14:45:23 2014 remi delima
*/

char	*my_strcpy(char *dest, char *src)
{
  int	loop;

  loop = 0;
  while (src[loop] != '\0')
    {
      dest[loop] = src[loop];
      loop = loop + 1;
    }
  return (dest);
}
