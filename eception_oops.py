class Calculator:
    def divide(self, a, b):
        """Method to perform division with exception handling"""
        try:
            result = a / b
        except ZeroDivisionError:
            return "Error: Cannot divide by zero!"
        except TypeError:
            return "Error: Invalid data type! Please enter numbers."
        else:
            return f"Result: {result}"
        finally:
            print("Execution completed for divide method.")

# Creating an object of Calculator class
calc = Calculator()

# Performing division with valid input
print(calc.divide(10, 2))  # Output: Result: 5.0

# Handling division by zero
print(calc.divide(10, 0))  # Output: Error: Cannot divide by zero!

# Handling invalid data type
print(calc.divide(10, "a"))  # Output: Error: Invalid data type!
