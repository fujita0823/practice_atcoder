n,l = [int(i) for i in input().split()]
M = 10**9+7
a = [0]*(n+1)
a[0] = 1
a[1] = 1

for i in range(2,n+1):
  if i-l<0:
    a[i] = a[i-1]
  else:
    a[i] = (a[i-1] + a[i-l])%M
  #print(i, a)

print(a[n])