a,b = [int(i) for i in input().split()]

def func1(a,b):
  print(a*a)
  
def func2(a,b):
  c = b-a
  s = c*a
  for i in range(a-c):
    s += a-1-i
  print(s)

def func3(a,b):
  s = 0
  for i in range(b):
    s += i
  print(s)
  

if b >= 2*a:
  func1(a,b)
elif b >= a:
  func2(a,b)
else:
  func3(a,b)