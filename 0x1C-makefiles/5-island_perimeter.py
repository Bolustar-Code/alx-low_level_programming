#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.

    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])  # Get the width of the grid
    height = len(grid)    # Get the height of the grid
    edges = 0             # Initialize variable to count edges
    size = 0              # Initialize variable to count land squares

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:  # If land square is found
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    return size * 4 - edges * 2
