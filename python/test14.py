# test14.py

# Create a variable called sentence with the value:
#   "apple,banana,cherry,mango"
#
# Split it into a list called fruits using the comma as a separator
# Print fruits
# Then join the list back into a string using " - " as the separator
# Print the joined string
#
# Expected output:
#   ['apple', 'banana', 'cherry', 'mango']
#   apple - banana - cherry - mango

# Your code here
sentence = "apple,banana,cherry,mango"

fruits = sentence.split(",")
print(fruits)

joined = " - ".join(fruits)
print(joined)