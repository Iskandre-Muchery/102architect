##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	102architect.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	102architect

all:	$(NAME)

$(NAME):
	gcc $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean

re:	fclean all