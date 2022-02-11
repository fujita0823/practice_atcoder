import math

t = float(input())
l, x, y = [float(i) for i in input().split()]
q = int(input())
for i in range(q):
  e = float(input())
  arg = e/t * math.pi * 2
  w, h = (-l/2)*math.sin(arg), (l/2)*(1-math.cos(arg))
  tan = h/((w-y)**2+x**2)**0.5
  theta = math.atan(tan)
  print(math.degrees(theta))  