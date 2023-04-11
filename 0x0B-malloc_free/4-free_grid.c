#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid.
* @grid: multidimensional array of integers.
* @height: height of the grid.
*
* This function frees the memory allocated for a 2D grid.
* It first frees each row of the grid, then frees the grid itself.
*
* Return: no return
*/
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{

while (height >= 0) /* Free each row of the grid*/
{
free(grid[height]);
height--;
}

free(grid); /*Free the grid itself*/
}
}
