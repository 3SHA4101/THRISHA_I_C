class Person:
    count = 0  # Class variable to count instances

    def __init__(self, name):
        self.name = name
        Person.count += 1  # Increment count when a new instance is created

    @classmethod
    def get_instance_count(cls):
        """Class method to return the count of instances"""
        return cls.count

# Creating objects
p1 = Person("Alice")
p2 = Person("Bob")
p3 = Person("Charlie")

# Checking instance count
print(f"Total instances created: {Person.get_instance_count()}")  # Output: 3
