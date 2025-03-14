class shape:
  def area(self):
    pass
class rectangle(shape):
  def __init__(self,l,b):
    self.l=l
    self.b=b
  def area(self):
    return self.l*self.b
class circle(shape):
  def __init__(self,r):
    self.r=r
  def area(self):
    return 3.14*self.r**2
s=[rectangle(4,5),circle(3)]
for i in s:
  print(i.area())
