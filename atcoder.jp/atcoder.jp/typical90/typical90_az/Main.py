n = int(input())
M = 10**9+7
total = 1
for i in range(n):
  a = [int(i) for i in input().split()]
  s = 0
  for j in range(6):
    s += a[j]
  s = s%M
  total = (total*s)%M
print(total)