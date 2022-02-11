n = int(input())
c = [int(i) for i in input().split()]
c.sort()
ret, fin = 0, False
m = n
x = n//c[2]
y,z = 0,0
if n%c[2] == 0:
  m = x
elif x==0:
  y = n//c[1]
  if y==0:
    m = n//c[0]
  else:
    for i in range(y):
      res = n - (y-i)*c[1]
      if res%c[0] == 0:
        ret = y+(res//c[0])-i
        if ret<m:
          m = ret
else:
  for i in range(x):
    res = n - (x-i)*c[2]
    y = res//c[1]
    for j in range(y):
      res2 = res - (y-j)*c[1]
      if res2%c[0]==0:
        z = res2//c[0]
        ret = x+y+z-i-j
        if ret<m:
          m = ret

print(m)