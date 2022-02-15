n, q = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
e = 0
b = []
for i in range(n-1):
  b.append(a[i+1]-a[i])
  e += abs(a[i+1]-a[i])
for i in range(q):
  l, r, v = [int(j) for j in input().split()]
  if l==1 and r==n:
    new_dif, old_dif = 0,0
  elif l==1:
    old_dif = abs(b[r-1])
    b[r-1] -= v
    new_dif = abs(b[r-1])
  elif r==n:
    old_dif = abs(b[l-2])
    b[l-2] += v
    new_dif = abs(b[l-2])
  else:
    old_dif = abs(b[l-2]) + abs(b[r-1])
    b[l-2] += v
    b[r-1] -= v
    new_dif = abs(b[l-2]) + abs(b[r-1])
  e += (new_dif - old_dif)
  print(e)