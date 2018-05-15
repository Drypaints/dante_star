##
## EPITECH PROJECT, 2018
## generator
## File description:
## Makefile for dante's generator
##

CC	=	gcc

RM	=	rm -rf

SRC	=	src/main.c		\
		src/check_error.c	\
		src/gen_maze.c		\
		src/alloc_funcs.c	\
		src/gen_per_maze.c	\
		src/gen_imp_maze.c	\
		src/set_grid_walls.c	\
		src/display_maze.c	\
		src/change_maze.c	\
		src/randomize_array.c	\
		src/check_side.c	\
		src/go_back.c

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

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