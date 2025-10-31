# Take user input for three integers
a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))

# Compute and display the average, difference, remainder of the three integers
average = (a + b + c) / 3
print(f"Average of a, b, and c: {average}")

abs_difference = abs(a - b)
print(f"Absolute difference between a and b: {abs_difference}")

remainder = a % c
print(f"Remainder of a divided by c: {remainder}")


# Swap a and b in one line
a,b=b,a



print("After swapping, a =", a ," and b =", b)