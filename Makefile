##
## EPITECH PROJECT, 2018
## tetris
## File description:
## Makefile for tetris
##

all:
	make -C ./solver
	make -C ./generator
	cp ./solver/solver ./tournament
	cp ./generator/generator ./tournament

clean:
	make -C ./solver clean
	make -C ./generator clean

fclean: clean
	make -C ./solver fclean
	make -C ./generator fclean
	rm -rf ./tournament/*

re:	fclean all

.PHONY:	all fclean clean re