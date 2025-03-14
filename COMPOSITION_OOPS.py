

class Engine:
    def __init__(self, horsepower):
        self.horsepower = horsepower

    def start(self):
        return "Engine started!"

class Car:
    def __init__(self, brand, horsepower):
        self.brand = brand
        self.engine = Engine(horsepower)  # Composition: Car has an Engine

    def start_car(self):
        return f"{self.brand} car: {self.engine.start()} with {self.engine.horsepower} HP"

# Creating a Car object
my_car = Car("Toyota", 150)

# Using the Car object
print(my_car.start_car())  # Output: Toyota car: Engine started! with 150 HP
