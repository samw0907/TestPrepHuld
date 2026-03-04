"""
Write a function that returns a new list containing only numbers 
greater than a given threshold.

Example:
filter_above([1, 5, 3, 8, 2, 9], 4) → [5, 8, 9]
"""

def filter_above(numbers, threshold):
    result = []
    for number in numbers:
        if number > threshold:
            result.append(number)
    return result

print(filter_above([1, 5, 3, 8, 2, 9], 4))