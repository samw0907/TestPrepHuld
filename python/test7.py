# test7.py

# Create a dictionary called person with three keys:
#   "name", "age", "city"  (any values you like)
#
# Loop through it and print each key and value on one line
#
# Expected output (example):
#   name: Sam
#   age: 34
#   city: Espoo
#
# Hint: use .items()

# Your code here

person = {
    "name": "Sam",
    "age": 34,
    "city": "Espoo"
}

for key, value in person.items():
    print(f"{key}: {value}")