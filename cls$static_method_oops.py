class MathOperations:
    pi = 3.14159  # Class attribute

    @classmethod
    def circle_area(cls, radius):
        """Class method that calculates area of a circle using class attribute pi"""
        return cls.pi * radius * radius

    @staticmethod
    def add(x, y):
        """Static method that adds two numbers"""
        return x + y

# Using class method
area = MathOperations.circle_area(5)
print(f"Area of circle with radius 5: {area}")  # Output: 78.53975

# Using static method
sum_result = MathOperations.add(10, 20)
print(f"Sum of 10 and 20: {sum_result}")
