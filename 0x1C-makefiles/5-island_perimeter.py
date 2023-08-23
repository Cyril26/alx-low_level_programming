#!/usr/bin/python3
"""Function island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid.

    Args:
        grid (list): grid
    """
    rows, columns = len(grid), len(grid[0])
    perimeter = 0
    for row in range(rows):
        for col in range(columns):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Deduct 2 sides for adjacent land cells
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
    return perimeter