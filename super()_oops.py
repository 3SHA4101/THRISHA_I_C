class lion:
  def speak(self):
    return "roar"
class cat(lion):
  def speak(self):
    a=super().speak()

    return f"{a} from lion cat meowws" 
Lion=lion()
Cat=cat()
print("the lion")
speaking(Lion)
print("the cat")
speaking(Cat)
print("3sha 31")
