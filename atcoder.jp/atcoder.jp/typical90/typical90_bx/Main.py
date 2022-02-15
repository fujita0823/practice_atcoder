n = int(input())
a = [int(i) for i in input().split()]
s = [0]*2*n
s[0] = a[0]
for i in range(1,n):
  s[i] += s[i-1]+a[i]
for i in range(n):
  s[i+n] += s[i+n-1] + a[i]
total = s[n-1]
if total%10!=0:
  print("No")
else:
  dev10 = total//10
  check = False
  for i in range(n):
    l, r = i, n+i
    h = r
    while abs(l-r)>1:
      if s[h]-s[i]==dev10:
        check=True
        break
      elif s[h]-s[i]>dev10:
        r = h
      else:
        l = h
      h = (l+r)//2
  if check:
    print("Yes")
  else:
    print("No")