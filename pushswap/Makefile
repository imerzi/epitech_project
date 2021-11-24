##
## Makefile for make_push_swap in /home/delima_r/B1_PROG/CPE_2014_Pushswap/test
## 
## Made by remi delima
## Login   <delima_r@epitech.net>
## 
## Started on  Sun Dec 14 15:11:31 2014 remi delima
## Last update Sun Dec 14 15:17:04 2014 remi delima
##

CC	= cc

RM	= rm -rf

LDFLAGS = -L./lib/my -lmy

SRC	= my_list.c \
	  my_rotate.c \
	  my_push_swap.c \
	  my_check.c \
	  main.c

NAME	= push_swap

OBJ	= $(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
