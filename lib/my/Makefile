##
## EPITECH PROJECT, 2021
## lib makefile
## File description:
## makefile lib
##

SRC	=	my_atoi.c		\
		my_getnbr.c		\
		my_putstr.c		\
		my_strdup.c		\
		my_concatstr.c	\
		my_putnbr.c		\
		my_revstr.c		\
		my_strlen.c		\
		my_putchar.c	\
		convert_map.c	\
		error.c			\
		my_itoa.c 		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar -rc $(NAME) $(OBJ)
		cp $(NAME) ..

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
