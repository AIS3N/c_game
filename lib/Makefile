##
## Makefile for Makefile in /home/Libmy/smajov_d/libmy_01
## 
## Made by SMAJOVIC Demirel
## Login   <smajov_d@etna-alternance.net>
## 
## Started on  Sat Oct  1 19:09:54 2016 SMAJOVIC Demirel
## Last update Sun Oct  2 19:29:21 2016 SMAJOVIC Demirel
##

NAME = libmy.a

SRC  =  my_putchar.c \
	my_isneg.c \
	my_put_nbr.c \
	my_swap.c \
	my_putstr.c \
	my_strlen.c \
	my_getnbr.c \
	my_strcpy.c \
	my_strncpy.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strcat.c \
	my_strncat.c \
	my_strdup.c \
	my_str_to_wordtab.c \
	my_strstr.c

$(NAME) :
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar -rc $(NAME) *.o
	ranlib $(NAME)

clean :
	/bin/rm -f *.o

fclean :
	/bin/rm -f $(NAME)

.PHONY : clean flclean all
