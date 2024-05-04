# Function to calculate the factorial of a number

def factorial(n):
        return n * factorial(n-1)

number = input("Enter a number: ")
number = int(number)

result = factorial(number)
print("The factorial of", number, "is", result)
