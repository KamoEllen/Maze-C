#ifndef MAZE_H
#define MAZE_H

/*
 * File: maze.h
 * Auth: Kamogelo Ellen Kganakga
 * Desc: Header file containing declarations for all functions
 *       used my whole Program.
 */

#include <SDL2/SDL.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SCREEN_HEIGHT 768
#define SCREEN_WIDTH 1024

#define MAP_WIDTH 24
#define MAP_HEIGHT 24

/**
 * struct SDL_Instance - Struct for SDL rendering in window
 * @window: The window to display rendering in
 * @renderer: The renderer to render graphics with
 **/
typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;

/**
 * struct double_s - Struct for x/y values of doubles
 * @x: X value of the object
 * @y: Y value of the object
 **/
typedef struct double_s
{
	double x;
	double y;
} double_s;

/**
 * struct int_s - Struct for x/y values of ints
 * @x: X value of the object
 * @y: Y value of the object
 **/
typedef struct int_s
{
	int x;
	int y;
} int_s;

/**
 * struct keys - Struct to keep track of key presses
 * @up: Is up pressed (1) or not (0)
 * @down: Is down pressed (1) or not (0)
 * @right: Is right pressed (1) or not (0)
 * @left: Is left pressed (1) or not (0)
 **/
typedef struct keys
{
	int up;
	int down;
	int right;
	int left;
} keys;

/**
 * struct level - Struct to contain the level and all starting values
 * @map: The map of the level
 * @height: height of that map
 * @win: The x/y coordinate of the win space
 * @play: The x/y starting position of the player
 * @dir: The x/y of the direction vector the player is looking
 * @plane: The x/y direction vector of the projection plane
 **/
typedef struct level
{
	char **map;
	size_t height;
	int_s win;
	double_s play;
	double_s dir;
	double_s plane;
} level;

/* Initialize SDL_Instance: init_instance.c */
int init_instance(SDL_Instance *);

/* Create the map for maze from file: create_maze.c */
char **create_map(char *, double_s *, int_s *, size_t *);
void plot_grid_points(char **, double_s *, int_s *, size_t, size_t, char *,
		      int *);
size_t get_line_count(char *);
size_t get_char_count(char *);

/* Handle player movement/rotation: movement.c */
void rotate(double_s *, double_s *, int);
void movement(keys, double_s *, double_s *, double_s *, char **);

/* Handle player winning: win.c */
void print_win(void);
int check_win(double_s, int_s, int *);

#endif

