#!/usr/bin/python3
"""returns the permeter of the island."""

def island_perimeter(grid):
    """
    Args: grid (List[List[int]]):

    Returns: int type - The perimeter of the island. 
    """

    rows = len(grid)
    colomuns = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(colomuns):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    
    return perimeter
