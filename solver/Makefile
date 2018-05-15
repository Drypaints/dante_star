##
## EPITECH PROJECT, 2018
## solver
## File description:
## Makefile for dante's solver
##

CC	=	gcc

RM	=	rm -f

SRC	=	src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

CFLAGS	=	-I./include			\
		-Wall				\
		-Wextra				\
		-g

LDFLAGS	=	-I include

ALL:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean ALL

.PHONY:	ALL fclean clean re
