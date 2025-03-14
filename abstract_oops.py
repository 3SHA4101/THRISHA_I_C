from abc import ABC, abstractmethod

# Abstract Base Class
class Animal(ABC):
    
    @abstractmethod
    def speak(self):
        """Abstract method that must be implemented in subclasses"""
        pass  

# Subclass 1 (Concrete Class)
class Dog(Animal):
    def speak(self):
        return "Woof! Woof!"

# Subclass 2 (Concrete Class)
class Cat(Animal):
    def speak(self):
        return "Meow! Meow!"

# Trying to create an instance of Animal (will cause an error)
# animal = Animal()  # TypeError: Can't instantiate abstract class

# Creating objects of concrete subclasses
dog = Dog()
cat = Cat()

print(dog.speak())  # Output: Woof! Woof!
print(cat.speak())  # Output: Meow! Meow!
