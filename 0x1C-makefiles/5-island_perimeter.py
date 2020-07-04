#!/usr/bin/python3
"""Returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """
    Calculate perimeter of the island.
    Grid is a list of equal sized lists.
    """
    # Measure grid (map) matrix
    height = len(grid)
    width = len(grid[0])
    perimeter = 0
    shores = 0
    size = 0

    # Checks for land (1's in the grid)
    for x in range(height):
        for y in range(width):
            if (grid[x][y]) == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    shores += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    shores += 1
    perimeter = size * 4 - shores * 2
    return perimeter
