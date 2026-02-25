# test12.py

# You have a list: numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
#
# Using a list comprehension, create a new list called squared_evens
# containing the squares of only the even numbers
#
# Print squared_evens
#
# Expected output:
#   [4, 16, 36, 64, 100]
#
# Hint: [x**2 for x in numbers if ...]

# Your code here
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

squared_evens = [x*x for x in numbers if x % 2 == 0]
print(squared_evens)