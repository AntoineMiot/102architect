##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC	=	main_architect.c	\
		rotation.c	\
		translation.c	\
		scale.c	\
		reflection.c	\
		my_strlen.c	\
		display.c	\
		calc_matrice.c	\
		operator.c	\
		display_ope.c	\
		test_error.c

OBJ		=	$(SRC:.c=.o)

NAME	=	102architect

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lm -L./lib -I./include
	rm *.o

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
