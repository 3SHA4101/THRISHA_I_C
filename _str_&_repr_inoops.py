class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):
        """User-friendly string representation"""
        return f"Person: {self.name}, Age: {self.age}"

    def __repr__(self):
        """Unambiguous official representation"""
        return f"Person('{self.name}', {self.age})"

# Creating an object
p = Person("Alice", 30)

# Using print() calls __str__()
print(p)  # Output: Person: Alice, Age: 30

# Using repr() calls __repr__()
print(repr(p))  # Output: Person('Alice', 30)

# Checking object in interactive mode (direct reference)
p  # Output in interactive shell: Person('Alice', 30)
