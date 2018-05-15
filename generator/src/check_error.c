/*
** EPITECH PROJECT, 2018
** dante
** File description:
** check_error
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	display_error(void)
{
	fprintf(stderr, "An error occured\n");
	exit(84);
}

void	check_error(int ac, char **av)
{
	if (ac != 3 && ac != 4) {
		display_error();
	}
	else if (atoi(av[1]) <= 0 && atoi(av[2]) <= 0) {
		display_error();
	} else {
	}
	return;
}
