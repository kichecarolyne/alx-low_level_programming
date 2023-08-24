#!/usr/bin/python3
"""module that calculates and returns the perimeter of an island"""


def island_perimeter(grid):
    """
    function that calculates and returns the perimeter of an island
    describe in grid
     Args:
        grid (list): list of list of integers representing an island
        0 represents a water zone, 1 represents a land zone
        one cell is a square with side length 1
    Returns:
        the perimeter of the island defined in grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
