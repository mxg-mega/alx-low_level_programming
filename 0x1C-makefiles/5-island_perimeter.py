#!/usr/bin/python3
"""
Island Perimeter Function to calculate the Perimeter of a Grid
"""


def island_perimeter(grid):
    """
        island_perimeter function calculates the perimeter
        of the grid island.
        ARGS:
            grid: a list of lists of integers
    """
    perimeter = 0
    for i in range(len(grid)):
        if 1 not in grid[i]:
            continue
        for j in range(len(grid[i])):
            if grid[i][j] != 1:
                continue
            perimeter += 4
            if grid[i][j] == 1:
                if (j >= 0 and j < len(grid[i])) and grid[i][j + 1] == 1:
                    perimeter -= 1
                if (j <= len(grid[i]) and j > 0) and grid[i][j - 1] == 1:
                    perimeter -= 1
                if (i >= 0 and i < len(grid)):
                    if grid[i + 1][j] == 1:
                        perimeter -= 1
                if (i <= len(grid) and i > 0) and grid[i - 1][j] == 1:
                    perimeter -= 1

    return perimeter
