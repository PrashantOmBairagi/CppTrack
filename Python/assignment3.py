# Initialize an empty list
values = []

print("Enter values to add to the list. Press Enter on an empty line when you are finished:")

while True:
    # Get user input
    value = input("Enter a value: ")
    
    # Break the loop if the input is an empty string
    if value == "":
        break
    
    # Add the value to the list
    values.append(value)

# Print the final list
print("Your list:", values)