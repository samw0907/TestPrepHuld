"""
Write a function that calculates the sum of all values in a 2D list (grid).

Example:
grid = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
sum_grid(grid) → 45
"""

def sum_grid(grid):
    # Your code here
    sum = 0
    for row in grid:
        for number in row:
            sum += number
    return sum
# Test
grid = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print(sum_grid(grid))  # Should print 45