#!/usr/bin/python3

"""
module for island perimeter
"""


def island_perimeter(grid: list):
    """
    driver for island perimeter
    """

    y = 0
    x = 0

    for row in range(1, len(grid) - 1):
        for col in range(1, len(grid[row]) - 1):
            if grid[row][col] == 1:
                if grid[row][col - 1] == 0:
                    y += 1
                if grid[row][col + 1] == 0:
                    y += 1
                if grid[row - 1][col] == 0:
                    x += 1
                if grid[row + 1][col] == 0:
                    x += 1
    return x + y


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

    grid2 = [
        [0, 0, 0],
        [0, 1, 0],
        [0, 1, 1],
    ]
    print(island_perimeter(grid))
    print(island_perimeter(grid2))
