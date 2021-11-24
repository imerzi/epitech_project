##
## Makefile for makefile_ls in /home/delima_r/B1_UNIX/PSU_2014_my_ls
## 
## Made by remi delima
## Login   <delima_r@epitech.net>
## 
## Started on  Sun Nov 30 16:45:44 2014 remi delima
## Last update Sat Dec  6 08:04:05 2014 remi delima
##

CC	= gcc

RM	= rm -f

LDFLAGS	= -L./lib/my -lmy

NAME	= ls

SRC	= block.c \
	  my_ls.c \
	  option_d.c \
	  option_l.c

OBJ	= $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

all : $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
