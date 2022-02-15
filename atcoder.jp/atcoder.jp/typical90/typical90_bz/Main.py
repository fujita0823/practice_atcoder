n,m = [int(i) for i in input().split()]
under = [0]*n
ret = 0

for _ in range(m):
  e1,e2 = [int(i) for i in input().split()]
  e = max(e1,e2)
  under[e-1] += 1
  if under[e-1]==1:
    ret += 1
  elif under[e-1]==2:
    ret -= 1
  
print(ret)