#!/usr/bin/python3
"""Returns the perimeter of the island described in grid"""

def shore_count(grid, height, width, x, y):
    """
    uses cartography compass to check the grid island's  shores
    """
    shores = 0
    # North
    if (x > 0 and grid[x - 1][y]):
        shores += 1
    # West
    if (y > 0 and grid[x][y - 1]):
        shores += 1
    # South
    if (y < height-1 and grid[x + 1][y]):
        shores += 1
    # East
    if (y < width-1 and grid[x][y + 1]):
        shores += 1

    return shores

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

    # Checks for a valid grid
    if height == 0:
        return 0

    if width == 0:
        return 0

    # Checks for land (1's in the grid)
    for x in range(height):
        for y in range(width):
            if (grid[x][y]):
                # 4 compass directions
                perimeter += (4 - shore_count(grid, height, width, x, y))
    return perimeter
