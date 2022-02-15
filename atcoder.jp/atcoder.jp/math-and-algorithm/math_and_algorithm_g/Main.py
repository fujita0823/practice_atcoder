def gcd(x,y):
  while x>=1 and y>=1:
    if x==y:
      return x
    elif x>y:
      x = x % y
    else:
      y = y % x
  if x>=1:
    return x
  return y

N, a, b = [int(i) for i in input().split()]
g = gcd(a,b)
print(N//a + N//b - N//(a*b//g))