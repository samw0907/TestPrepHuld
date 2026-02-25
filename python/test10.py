# test10.py

# Write a function called is_even that takes one parameter: number
# If the number is even, return "even"
# If the number is odd, return "odd"
#
# Then print the results of calling it with: 4, 7, 10, 3
#
# Expected output:
#   even
#   odd
#   even
#   odd
#
# Hint: use the % (modulo) operator to check for remainder

# Your code here
def is_even(number):
    if number % 2 == 0:
        return "Even"
    else:
        return "Odd"

print(is_even(4))
print(is_even(7))
print(is_even(10))
print(is_even(3))