##
## Makefile for library in /home/delima_r/rendu/Piscine_C_J11/lib/my
## 
## Made by remi delima
## Login   <delima_r@epitech.net>
## 
## Started on  Mon Oct 20 14:51:51 2014 remi delima
## Last update Thu Jan 15 15:54:20 2015 remi delima
##

SRC	= my_putchar.c \
	  my_isneg.c \
	  my_put_nbr.c \
	  my_swap.c \
	  my_putstr.c \
	  my_strlen.c \
	  my_getnbr.c \
	  my_sort_int_tab.c \
	  my_power_rec.c \
	  my_square_root.c \
	  my_is_prime.c \
	  my_find_prime_sup.c \
	  my_strcpy.c \
	  my_strncpy.c \
	  my_revstr.c \
	  my_strstr.c \
	  my_strcmp.c \
	  my_strncmp.c \
	  my_strupcase.c \
	  my_strlowcase.c \
	  my_strcapitalize.c \
	  my_str_isalpha.c \
	  my_str_isnum.c \
	  my_str_islower.c \
	  my_str_isupper.c \
	  my_str_isprintable.c \
	  my_showstr.c \
	  my_showmem.c \
	  my_strcat.c \
	  my_strncat.c \
	  my_strlcat.c \
	  my_putstr_count.c \
	  my_putnbr_base.c \
	  my_putstr_octal.c \
	  my_put_nbr_count.c \
	  my_put_nbr_unsigned.c \
	  my_printf.c

NAME	= libmy.a

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	cp my.h ../../include/my.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp libmy.a ../libmy.a

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean flcean re
