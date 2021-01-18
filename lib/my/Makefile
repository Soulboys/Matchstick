##
## EPITECH PROJECT, 2018
## CPool_Day10_2018
## File description:
## makefile
##

SRC		=	my_strcpy.c		\
			my_strlen.c		\
			my_revstr.c		\
			my_putstr.c		\
			my_putchar.c	\
			my_strcmp.c		\
			my_getnbr.c		\
			my_strlen2.c	\
			my_strdup.c		\
			strtotab.c		\
			my_strlentab.c	\
			my_swap.c		\
			my_tablen_line.c\
			my_put_nbr.c

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp	$(NAME)	../

clean:
		rm -rf $(OBJ)


fclean:		clean
		rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
