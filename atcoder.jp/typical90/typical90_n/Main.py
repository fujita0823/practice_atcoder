n = int(input())
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
a.sort()
b.sort()
dist = 0
for i in range(n):
  dist += abs(a[i]-b[i])
print(dist)