def gcd(x,y):
  if x%y==0:
    return y
  else:
    return gcd(y, x%y)

a,b = [int(i) for i in input().split()]
g = gcd(a,b)
G = a*b//g
L = 10**18
if G>L:
  print("Large")
else:
  print(G)