##
## Makefile for make_libasm in /home/delima_r/re_TEK2/ASM/asm_minilibc
## 
## Made by Remi De Lima
## Login   <delima_r@epitech.net>
## 
## Started on  Tue Mar 21 12:19:48 2017 Remi De Lima
## Last update Tue Mar 21 15:16:48 2017 Remi De Lima
##

ASM	= nasm

FLAG	= -f elf64

RM	= rm -rf

SRC	= strlen.S

NAME	= libasm.so

OBJ	= $(SRC:%.o: %.asm)

$(NAME): $(OBJ)
	 gcc -shared -o $(NAME) $(OBJ)

.asm.o:
	$(ASM) $(FLAG) $< -o $@

all:	$(SRC) $(NAME) 

clean:
	$(RM)  $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean re all
