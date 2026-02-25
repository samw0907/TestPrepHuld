# test13.py

# Create a variable called sentence with the value:
#   "the quick brown fox"
#
# Print the sentence in all uppercase
# Print the sentence with the first letter of each word capitalised
# Print the number of characters in the sentence
# Print the sentence with "fox" replaced by "dog"
#
# Expected output:
#   THE QUICK BROWN FOX
#   The Quick Brown Fox
#   19
#   the quick brown dog

# Your code here

sentance = "the quick brown fox"

print(sentance.upper())
print(sentance.title())
print(len(sentance))
print(sentance.replace("fox", "dog"))