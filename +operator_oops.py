class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        """Overloading the + operator to add two Point objects"""
        if isinstance(other, Point):
            return Point(self.x + other.x, self.y + other.y)
        raise TypeError("Operands must be of type Point")

    def __str__(self):
        """String representation of the object"""
        return f"({self.x}, {self.y})"

# Creating two Point objects
p1 = Point(2, 3)
p2 = Point(4, 5)

# Adding objects using overloaded +
p3 = p1 + p2  

print(f"Point 1: {p1}")  # Output: (2, 3)
print(f"Point 2: {p2}")  # Output: (4, 5)
print(f"Resultant Point: {p3}")  # Output: (6, 8)
