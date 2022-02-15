import numpy as np
h,w = [int(i) for i in input().split()]
#a = [0]*h
#b = [0]*h
a, b = np.zeros((h,w)), np.zeros((h,w))

for i in range(h):
  a[i] = [int(i) for i in input().split()]
for i in range(h):
  b[i] = [int(i) for i in input().split()]
c = a-b
count = 0

for i in range(h-1):
  for j in range(w-1):
    count += int(abs(c[i][j]))
    c[i+1][j] -= c[i][j]
    c[i][j+1] -= c[i][j]
    c[i+1][j+1] -= c[i][j]
    c[i][j] = 0

if np.all(c==0):
  print("Yes")
  print(count)
else:
  print("No")