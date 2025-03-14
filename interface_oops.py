from abc import ABC, abstractmethod

# Defining an interface using an abstract base class
class Animal(ABC):
    
    @abstractmethod
    def speak(self):
        """Abstract method that must be implemented in subclasses"""
        pass  

    @abstractmethod
    def move(self):
        """Abstract method that must be implemented in subclasses"""
        pass  

# Concrete class implementing the interface
class Dog(Animal):
    def speak(self):
        return "Woof! Woof!"

    def move(self):
        return "Dog runs on four legs."

# Concrete class implementing the interface
class Bird(Animal):
    def speak(self):
        return "Chirp! Chirp!"

    def move(self):
        return "Bird flies in the sky."

# Creating instances
dog = Dog()
bird = Bird()

# Calling interface methods
print(dog.speak())  # Output: Woof! Woof!
print(dog.move())   # Output: Dog runs on four legs.

print(bird.speak()) # Output: Chirp! Chirp!
print(bird.move())  # Output: Bird flies in the sky.
