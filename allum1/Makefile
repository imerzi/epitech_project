##
## Makefile for make allum in /home/delima_r/Semestre2/B2_PROG/Allum1
## 
## Made by remi delima
## Login   <delima_r@epitech.net>
## 
## Started on  Tue Feb 10 15:02:53 2015 remi delima
## Last update Sun Feb 22 15:33:10 2015 remi delima
##

CC	= cc

RM	= rm -rf

LDFLAGS	= -L./lib/my -lmy

SRC	= main.c \
	  allum1.c \
	  check.c \
	  funct.c \
	  get_next_line.c

NAME	= allum1

OBJ	= $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
