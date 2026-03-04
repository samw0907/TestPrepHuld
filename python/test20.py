"""
Write a function that counts how many even numbers are in a list.

Example:
count_evens([1, 2, 3, 4, 5, 6]) → 3
"""

def count_evens(numbers):
    # Your code here
    count = 0
    for number in numbers:
        if number % 2 == 0:
            count += 1
    return count

# Test
print(count_evens([1, 2, 3, 4, 5, 6]))  # Should print 3