##
## Makefile for make_minitalk in /home/delima_r/Semestre2/B2_UNIX/PSU_2014_minitalk
## 
## Made by remi delima
## Login   <delima_r@epitech.net>
## 
## Started on  Tue Mar 10 15:02:01 2015 remi delima
## Last update Tue Mar 10 15:39:00 2015 remi delima
##

CC	= cc

RM	= rm -rf

LDFLAGS	= -L./lib/my -lmy

SRC1	= ./server/serv.c

SRC2	= ./client/client.c

NAME1	= ./server/server

NAME2	= ./client/client

OBJ1	= $(SRC1:.c=.o)

OBJ2	= $(SRC2:.c=.o)

$(NAME1): $(OBJ1) $(OBJ2)
	  $(CC) $(OBJ1) -o $(NAME1) $(LDFLAGS)
	  $(CC)	$(OBJ2) -o $(NAME2) $(LDFLAGS)

all: $(NAME1)

clean:
	$(RM) $(OBJ1) $(OBJ2)

fclean: clean
	$(RM) $(NAME1) $(NAME2)

re: fclean all

.PHONY: all clean fclean re
