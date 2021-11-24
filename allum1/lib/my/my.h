/*
** my.h for my in /home/delima_r/rendu/Piscine_C_J09/include
** 
** Made by remi delima
** Login   <delima_r@epitech.net>
** 
** Started on  Thu Oct  9 11:20:30 2014 remi delima
** Last update Thu Jan 15 15:54:08 2015 remi delima
*/

#ifndef MY_H_
# define MY_H_

# include <stdarg.h>

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nombre);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int nb);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int nb);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmem(char *str, int size);
char	*my_strcat(char *dest, char *src);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
int	my_strlcat(char *dest, char *src, int size);
int	my_printf(const char *format, ...);
unsigned int	my_put_nbr_unsigned(int unsigned nb);
int	my_put_nbr_count(int nb);
int	my_putstr_count(char *str);
int	my_putnbr_base(unsigned long int nb, char *base);
int	my_putstr_octal(char *str);
int	flags(int i, int count, va_list list, const char *format);

#endif
