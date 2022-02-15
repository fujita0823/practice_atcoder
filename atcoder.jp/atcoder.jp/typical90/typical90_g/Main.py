n = int(input())
a = [int(i) for i in input().split()]
a.sort()

q = int(input())
for i in range(q):
  b = int(input())
  l,r = 0, n-1
  if b<=a[0]:
    print(abs(a[0]-b))
    continue
  if b>=a[n-1]:
    print(abs(a[n-1]-b))
    continue
  while True:
    if b<a[l+1] and b>=a[r-1]:
      break
    half = (l+r)//2
    #print(half, a[half])
    if b>=a[half]:
      l = half
    else:
      r = half
  l1 = abs(b-a[l])
  l2 = abs(b-a[r])
  print(min(l1,l2))