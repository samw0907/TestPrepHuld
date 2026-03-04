"""
Write a function that counts how many times each number appears in a list.
Return a dictionary with numbers as keys and counts as values.

Example:
count_occurrences([1, 2, 2, 3, 1, 1]) → {1: 3, 2: 2, 3: 1}
"""

def count_occurrences(numbers):
    counts = {}
    for number in numbers:
        if number in counts:
            counts[number] += 1
        else:
            counts[number] = 1
    return counts

# Test
print(count_occurrences([1, 2, 2, 3, 1, 1]))  # {1: 3, 2: 2, 3: 1}