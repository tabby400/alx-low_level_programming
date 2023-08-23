#!/usr/bin/python3
"""definition of a function for island perimeter"""

def island_perimeter(grid):
    """ function that returns the perimeter of an island
    Arguements:
        grid: list of list of ints
    Returns: perimeter of island
    """



    perimet = 0

    for p in range(len(grid)):
        for r in range(len(grid[p])):
            if grid[p][r] == 1:
                perimet = perimet + 4
                if p > 0 and grid[p - 1][r] == 1:
                    perimet -= 2
                if r > 0 and grid[p][r - 1] == 1:
                    perimet -= 2
    return perimet
