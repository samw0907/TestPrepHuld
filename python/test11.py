# test11.py

# You have a list: numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
#
# Using a list comprehension, create a new list called evens
# containing only the even numbers from the list
#
# Print evens
#
# Expected output:
#   [2, 4, 6, 8, 10]
#
# Hint: [x for x in numbers if ...]

# Your code here
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

evens = [x for x in numbers if x % 2 == 0]
print(evens)