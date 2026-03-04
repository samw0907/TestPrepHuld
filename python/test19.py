"""
Write a function that finds the maximum value in a list.

Example:
find_max([3, 7, 2, 9, 1]) → 9
"""

def find_max(numbers):
    # Your code here
    max = numbers[0]
    for number in numbers:
        if number > max:
            max = number
    return max

# Test
print(find_max([3, 7, 2, 9, 1]))  # Should print 9