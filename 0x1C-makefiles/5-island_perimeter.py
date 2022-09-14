#!/usr/bin/python3
"""
function that returns the perimeter of the island described in grid:

grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
"""


def island_perimeter(grid):
    """ function that returns the perimeter of a grid """
    rows = len(grid)
    perimeter = 0
    for i in range(rows):
        cols = len(grid[i])
        for j in range(cols):
            if (grid[i][j] == 1):
                left = 1 if j == 0 or grid[i][j - 1] == 0 else 0
                top = 1 if i == 0 or grid[i - 1][j] == 0 else 0
                right = 1 if j == cols - 1 or grid[i][j + 1] == 0 else 0
                bottom = 1 if i == rows - 1 or grid[i + 1][j] == 0 else 0
                perimeter += (top + right + bottom + left)
    return perimeter
