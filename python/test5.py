# test5.py

# Create a list called fruits containing: "apple", "banana", "cherry"
# Loop through the list and print the index and item together
#
# Expected output:
#   0 apple
#   1 banana
#   2 cherry
#
# Hint: use enumerate()

# Your code here
fruits = ["apple", "banana", "cherry"]

for i, fruit in enumerate(fruits):
    print(i, fruit)