n,p,q = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
"""
def dfs(arr, num, acc):
  #print(f"{arr}, {num}, {acc}")
  if num==5:
    return ((acc%p)==q)
  elif not arr:
    return 0
  else:
    s = arr[0]
    arr.remove(s)
    r1 = dfs(arr, num+1, acc*s)
    r2 = dfs(arr, num, acc)
    arr.append(s)
    return r1+r2

print(dfs(a,0,1))
"""
for t in a:
  t = t%p
cnt = 0
for i0 in range(n):
  for i1 in range(i0):
    for i2 in range(i1):
      for i3 in range(i2):
        for i4 in range(i3):
          acc = (((a[i0]*a[i1]%p)*a[i2]%p)*a[i3]%p)*a[i4]
          if acc%p==q:
            cnt += 1
print(cnt)