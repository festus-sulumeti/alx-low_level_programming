#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - function 2 return a 2 dimensional array
* @width: width size
* @height: height size
*
* Return: a multidimensional array of size height x width
*/
int **alloc_grid(int width, int height)
{
int row, col;
int **grid;


if (width <= 0 || height <= 0) /* check if width / height is <= 0 */
return (NULL);


grid = (int **)malloc(sizeof(int **) * height); /* allocate mem 4 rows */

if (grid == NULL)
return (NULL);


row = 0;/* loop through each row & allocate mem 4 cols */
do {
grid[row] = (int *)malloc(sizeof(int) * width);


if (grid[row] == NULL)
{
for (col = 0; col < row; col++)
free(grid[col]);
free(grid);
return (NULL);
}


col = 0; /* set each element in row 2 0 */
while (col < width)
{
grid[row][col] = 0;
col++;
}

row++;
} while (row < height);

return (grid);
}
