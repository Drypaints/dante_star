/*
** EPITECH PROJECT, 2018
** generator
** File description:
** gen_maze
*/

#ifndef GEN_MAZE_H
#define GEN_MAZE_H

char	**gen_maze(int ac, char **av);
// function which generates a maze in a 2-dim array
//	depending on argcount (command-line arg)
//	- perfect or imperfect

char	**gen_per_maze(int wid, int len);
//generate perfet maze

char	**gen_imp_maze(int wid, int len);
//generate imperfect maze

#endif