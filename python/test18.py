"""
Write a function that takes a list of numbers and returns their sum.

Example:
sum_list([1, 2, 3, 4, 5]) → 15
"""

def sum_list(numbers):
    # Your code here
    sum = 0
    for number in numbers:
        sum += number
    return sum

# Test
print(sum_list([1, 2, 3, 4, 5]))  # Should print 15