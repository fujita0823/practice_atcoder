n,k = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]

dist = 0
for i in range(n):
  dist += abs(a[i] - b[i])
if k>=dist and (k-dist)%2==0:
  print("Yes")
else:
  print("No")